#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * main - Copies the content of a file to another file.
 * @ac: The number of arguments.
 * @av: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, r_bytes, w_bytes;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/* Open source file */
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	/* Open/Create destination file with rw-rw-r-- (0664) */
	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		close(fd_from);
		exit(99);
	}

	/* Read and Write loop using 1024 byte buffer */
	while ((r_bytes = read(fd_from, buffer, 1024)) > 0)
	{
		w_bytes = write(fd_to, buffer, r_bytes);
		if (w_bytes == -1 || w_bytes != r_bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}

	if (r_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	/* Close file descriptors and check for errors */
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}

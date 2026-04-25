#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * create_file - Creates a file with specific permissions and content.
 * @filename: The name of the file to create.
 * @text_content: A NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w_status, len = 0;

	if (filename == NULL)
		return (-1);

	/* Open file: Create if not exist, Truncate if it does, Write Only */
	/* Permissions: S_IRUSR (read) | S_IWUSR (write) -> rw------- */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		/* Calculate length of text_content */
		while (text_content[len])
			len++;

		/* Write content to the file descriptor */
		w_status = write(fd, text_content, len);
		if (w_status == -1 || w_status != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

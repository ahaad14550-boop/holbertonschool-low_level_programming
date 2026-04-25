#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w_status, len = 0;

	if (filename == NULL)
		return (-1);

	/* Open the file for writing only, in append mode */
	/* O_APPEND ensures we start writing at the end of the file */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* If text_content is NULL, we don't write anything */
	/* But we return 1 because the file exists and is opened successfully */
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

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


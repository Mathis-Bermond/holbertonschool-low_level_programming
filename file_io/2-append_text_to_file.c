#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	ssize_t n_write, len;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (!text_content)
		return (1);

	for (len = 0; text_content[len]; len++)
		;

	n_write = write(fd, text_content, len);
	if (n_write == -1)
		return (-1);

	close(fd);
	return (1);
}

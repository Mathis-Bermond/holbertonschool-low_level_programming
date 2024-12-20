#include "main.h"

/**
* create_file - Creates a file.
* @filename: The name of the file to create.
* @text_content: A null-terminated string to write to the file.
*
* Return: 1 on success, -1 on failure.
*/

int create_file(const char *filename, char *text_content)
{
	int fd;

	ssize_t n_write, len;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
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

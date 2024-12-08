#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX
 * @filename: The name of the file to read.
 * @letters: The number of letters it should read and print.
 *
 * Return: The actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	ssize_t n_read, n_write;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	n_read = read(fd, buf, letters);
	if (n_read == -1)
	{
		free(buf);
		return (0);
	}

	n_write = write(STDOUT_FILENO, buf, n_read);
	if (n_write == -1)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);
	return (n_read);
}

#include "main.h"

/**
 * read_textfile - reads a text file and prints the character
 * @filename: filename.
 * @letters: numbers of letters printed.
 * Return: Return number of character printed else 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nrdb, nwrb;
	int fd;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	nrdb = read(fd, buffer, letters);
	nwrb = write(STDOUT_FILENO, buffer, nrdb);

	close(fd);

	free(buffer);

	return (nwrb);
}

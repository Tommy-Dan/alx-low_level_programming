#include "main.h"

/**
 * create_file - creating a file
 * @filename: the filename written
 * @text_content: file content written
 * Return: Return 1 if successful else 0 fail
 *
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	int rdwrf;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (i = 0; text_content[i]; i++)
		;
	rdwrf = write(fd, text_content, i);

	if (rdwrf == -1)
		return (-1);

	close(fd);

	return (1);
}

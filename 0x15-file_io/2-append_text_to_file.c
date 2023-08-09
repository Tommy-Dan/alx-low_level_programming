#include "main.h"

/**
 * append_text_to_file - appends the text at the end of a file
 * @filename: the filename to append text
 * @text_content: the content added
 * Return: Return 1 (successfull) else -1 (failure)
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	int rdwrf;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;

		rdwrf = write(fd, text_content, i);

		if (rdwrf == -1)
			return (-1);
	}

	close(fd);

	return (1);
}

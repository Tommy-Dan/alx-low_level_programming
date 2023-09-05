#include "main.h"

/**
 * error_exit - Print an error message and exit with the given status code.
 * @message: The error message to print.
 * @status: The exit status code.
 */

void error_exit(const char *message, int status)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(status);
}

/**
 * copy_file - Copy the contents of one file to another.
 * @file_from: The file descriptor to read from.
 * @file_to: The file descriptor to write to.
 * Return: Return nothing
 */

void copy_file(int file_from, int file_to)
{
	ssize_t chrs;
	char buffer[1024];

	while ((chrs = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		if (write(file_to, buffer, chrs) != chrs)
		{
			error_exit("Can't write to destination file", 99);
		}
	}
	if (chrs == -1)
	{
		error_exit("Can't read from source file", 98);
	}
}


/**
 * main - check for the code
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: Return (0)
 *
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;

	if (argc != 3)
	{
		error_exit("Usage: copy file_from file_to", 97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	if (file_from == -1)
	{
		error_exit("Can't read from source file", 98);
	}

	if (file_to == -1)
	{
		error_exit("Can't write to destination file", 99);
	}

	copy_file(file_from, file_to);

	if (close(file_from) == -1)
	{
		error_exit("Can't close source file descriptor", 100);
	}

	if (close(file_to) == -1)
	{
		error_exit("Can't close destination file descriptor", 100);
	}
	return (0);
}

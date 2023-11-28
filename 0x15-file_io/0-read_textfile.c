#include "main.h"

/**
  * read_textfile - reads a yextfile and prints to stdout
  * @filename: file to ber opened and read
  * @letters: number of letters to be printed or read
  * Return: 0 if unsuccessful, actual number of letters printed
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t write_len, read_len;
	char *buff;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDWR);
	if (file == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);

	read_len = read(file, buff, letters);
	if (read_len == -1)
	{
		close(file);
		free(buff);
		return (0);
	}
	write_len = write(STDOUT_FILENO, buff, read_len);
	if (write_len == -1)
	{
		close(file);
		free(buff);
		return (0);
	}
	if (read_len != write_len)
	{
		close(file);
		free(buff);
		return (0);
	}
	close(file);
	free(buff);
	return (read_len);
}

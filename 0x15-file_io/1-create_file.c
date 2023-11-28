#include "main.h"
/**
  * create_file - creates a file
  * @filename: file to be created
  * @text_content: null terminated sting to write to file
  * Return: -1 if unsuccessful, 1 on success
  */
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t check_write;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
		text_content = "";
	check_write = write(file, text_content, strlen(text_content));
	if (check_write == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}

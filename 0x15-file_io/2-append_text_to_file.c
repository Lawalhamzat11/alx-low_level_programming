#include "main.h"
/**
  * append_text_to_file - appends text at the end ofa file
  * @filename: file to be created
  * @text_content: null terminated sting to write to file
  * Return: -1 if unsuccessful, 1 on success
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t check_write;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		file = open(filename, O_WRONLY | O_APPEND);
		if (file == -1)
			return (-1);
		check_write = write(file, text_content, strlen(text_content));
		if (check_write == -1)
		{
			close(file);
			return (-1);
		}
		close(file);
	}
	return (1);

}

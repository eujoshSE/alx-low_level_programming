#include "main.h"

/**
 * append_text_to_file - Extends a file by appending additional text.
 * @filename: A pointer to the file's name.
 * @text_content: string to append to the file's end.
 *
 * Return: Returns -1 if the function fails or if filename is NULL.
 *         Returns -1 if the file doesn't exist.
 *         Returns 1 on success.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int gdo;
	int nletters;
	int gdw;

	if (!filename)
		return (-1);

	gdo = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (gdo == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	gdw = write(gdo, text_content, nletters);

	if (gdw == -1)
		return (-1);

	close(gdo);

	return (1);
}

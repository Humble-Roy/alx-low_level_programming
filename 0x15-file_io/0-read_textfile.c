#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int gdo;
	ssize_t gdr, gdw;
	char *term;

	if (!filename)
		return (0);

	gdo = open(filename, O_RDONLY);

	if (gdo == -1)
		return (0);

	term = malloc(sizeof(char) * (letters));
	if (!term)
		return (0);

	gdr = read(gdo, term, letters);
	gdw = write(STDOUT_FILENO, term, gdr);

	close(gdo);

	free(term);

	return (gdw);
}

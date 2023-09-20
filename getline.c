#include "monty.h"
/**
 * stream_fail - handles error reading files;
 * @filename: the file to be opened
 */
void stream_fail(char *filename)
{
	dprintf(2, "Error can't open file %s\n", filename);
	free_args();
	exit(EXIT_FAILURE);
}
/**
 * get_stream - opens the file to be read
 * @filename: the file to be opened
 */
void get_stream(char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		stream_fail(filename);

	args->stream = fdopen(fd, 'r');
	if (args->stream == NULL)
	{
		close(fd);
		stream_fail(filename);
	}
}

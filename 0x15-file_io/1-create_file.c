#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - creates a file.
 *@filename: char
 *@text_content: size_t
 * Return: Always 0.
 */
int create_file(const char *filename, char *text_content)
{
char buf;
int fd;
ssize_t rl, rw;
/* READ */
if (filename == NULL)
return (0);
fd = open(filename, O_RDWR);
if (fd == -1)
return (0);
rl = read(fd, buf, text_content);
if (rl < 0)
return (0);
/* P0SIX */
rw = write(STDOUT_FILENO, buf, rl);
if (rw < 0)
return (0);
free(buf);
close(fd);
return (rw);
}

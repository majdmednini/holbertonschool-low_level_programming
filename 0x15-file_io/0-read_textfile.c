#include "main.h"
#include <stlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *@n: int
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buf = malloc(sizeof(char) * letters);
ssize_t rl, rw;
if (filename == NULL)
return (0);
fd = open(filename, O_RDWR);
if (fd == -1)
return (0);
rl = read(fd, buf, letters);
if (rl < 0)
return (0);
rw = write(STDOUT_FILENO, buf, rl);
if (rw < 0)
return (0);
free(buf);
close(fd);
return (rw);
}

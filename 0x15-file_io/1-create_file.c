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
int fd, rw, lenght = 0;
if (filename == 0)
return (-1);
fd = open(filename, O_RDWR | O_WRONLY | O_CREAT | O_TRUNC );
if (fd < 0)
return (-1);
if (text_content != NULL)
{
while (text_content[lenght])
lenght++;
rw = write(fd, text_content, lenght);
if (rw < 0)
return (-1);
}
close(fd);
return (1);
}

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
char buf[14];
/* WRITE */
fd = open("myfile.txt", O_CREAT I O_WRONLY, 0600);
if(fd == -1)
{
printf("Failed");
exit(1);
}
write(fd, "Hello World!\n", 13);
close(fd);
/* READ */
fd = open(myfile.txt", O_RDONLY);
if(fd == -1)
{
printf("failed");
exit(1);
}
read(fd, buf, 13);
buf[13] = '\0';
close(fd);
printf("buf: %s\n", buf);
return (0);
}

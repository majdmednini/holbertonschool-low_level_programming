
int append_text_to_file(const char *filename, char *text_content)
{
int fd, wr, lenght;
if (filename == NULL)
return (-1);
fd = open(filename, O_RDWR | O_APPEND);
if (fd == -1)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[lenght] != '\0'; lenght++)
continue;
wr = write(fd, text_content, lenght);
if (wr == -1)
return (-1);
}
close(fd);
return (1);
}

#include <stdio.h>
#include <errno.h>
#include <string.h>

extern int errno;

void write_file(const char *filepath, const char *text);
void read_file(const char *filepath);

int main(int argc, char **argv)
{
    write_file("helloworld.txt", "Hello world");
    read_file("helloworld.txt");
    read_file("invalid.txt");

    return 0;
}

void write_file(const char *filepath, const char *text)
{
    int errnum;
    FILE *file;

    file = fopen(filepath, "w");
    if (!file)
    {
        errnum = errno;
        fprintf(stderr, "Error opening file: %s, error: %s\n", filepath, strerror(errnum));
    }
    else
    {
        fprintf(file, text);
        fclose(file);
    }
}

void read_file(const char *filepath)
{
    int errnum, c;
    FILE *file;

    file = fopen(filepath, "r");
    if (!file)
    {
        errnum = errno;
        fprintf(stderr, "Error opening file: %s, error: %s\n", filepath, strerror(errnum));
    }
    else
    {
        c = fgetc(file);
        while (c != EOF)
        {
            printf("%c", c);
            c = fgetc(file);
        }
        printf("\n");
        fclose(file);
    }
}
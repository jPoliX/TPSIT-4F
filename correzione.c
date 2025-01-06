#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Numero argomenti sbagliato\n");
        exit(1);
    }

    int fd;   
    ssize_t nread;
    char buff;
    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        perror("Errore nell'apertura del file");
        exit(2);
    }
    while ((nread = read(fd, &buff, sizeof(buff))) > 0)
    {
        if (write(STDOUT_FILENO, &buff, nread) == -1)
        {
            perror("Errore nella scrittura");
            close(fd);
            exit(3);
        }
    }

    if (nread == -1)
    {
        perror("Errore nella lettura");
    }
    close(fd);

    return 0;
}

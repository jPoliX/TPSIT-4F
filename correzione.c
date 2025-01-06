#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Numero argomenti sbagliato\n");
        exit(1);
    }
    int fd, nread;
    char buff[8];
    fd = open(argv[1], O_RDONLY);
    if (fd < 0) 
    {
        perror("Errore nell'apertura del file");
        exit(1);
    }

    while ((nread = read(fd, buff, sizeof(buff))) > 0)
    {
        write(1, buff, nread);
    }

    if (nread < 0)
    {
        printf("Errore nella lettura del file");
    }

    close(fd);

    return 0;
}

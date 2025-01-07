/*Scrivere un programma in linguaggio C che scriva l'alfabeto su un file
il cui nome deve essere letto da argv[1]*/

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
    int fd, nread;
    char alfabeto[] = "a b c d e f g h i j k l m n o p q r s t u x y z";
    fd = open(argv[1], O_CREAT | O_WRONLY, 0777);

    if (fd < 0)
    {
        printf("Errore nella creazione del file");
    }

    write(1, alfabeto, strlen(alfabeto));
    close(fd);
    return 0;
}

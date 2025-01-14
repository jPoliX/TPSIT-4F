/*Si vuole realizzare in linguaggio C un software monoprocesso che implementi il seguente comando:
$ cat file1.txt file2.txt file3.txt | grep “c”

Dove file[N].txt con N maggiore uguale a 1 sono una serie di files e il carattere "c" è a scopo esemplificativo e potrebbe essere
qualsiasi carattere.

Si utilizzino le system call al fine di leggere tutti i file di testo e, per ogni file, ricercare il carattere.
Al termine dell’esecuzione il software dovrà mostrare a video il numero di occorrenze del carattere trovate nei files e
dovrà contemporaneamente scrivere l’output su un file di testo il cui path sarà letto da argv.

Esempio:
$ ./a.out file1.txt file2.txt file3.txt k occorrenze.txt
$ Il carattere k compare 10 volte nei files: file1.txt, file2.txt, file3.txt
$ cat occorrenze.txt
$ Il carattere k compare 10 volte nei files: file1.txt, file2.txt, file3.txt

Osservazioni:
essendo il software monoprocesso non è necessario usare le pipe
prestare attenzione all’uso corretto di argv
si ricorda che il software deve funzionare per un numero arbitrario di files.
i percorsi dei files possono essere sia assoluti che relativi


Suggerimento:
Per facilitare la ricerca è possibile leggere un singolo carattere per volta usando la funzione read.*/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int fd, contatore;
    char carattere;
    char carCercato = argv[argc - 2];

    if (argc < 2)
    {
        printf("Numero argomenti sbagliato");
    }

    for (int i = 1; i < argc - 2; i++)
    {
        fd = open(argv[i], O_CREAT | O_WRONLY, 0644);

        while (read(fd, &carattere, sizeof(carattere)) > 0)
        {
            if (carattere == carCercato)
            {
                contatore++;
            }
        }
        close(fd);
    }

    write(1, &carattere, sizeof(carattere));

    fd = open(argv[argc - 1], O_CREAT | O_WRONLY, 0644);
    write(fd, &carattere, sizeof(carattere));

    return 0;
}

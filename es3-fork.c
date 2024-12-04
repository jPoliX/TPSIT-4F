/*Data una stringa letta da riga di comando si scriva un programma in linguaggio C
che istanzi un processo figlio il quale converta la stringa da minuscolo a maiuscolo

esempio di esecuzione:
$./a.out ciao
la stringa in maiuscolo è CIAO
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/fcntl.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char stringa[strlen(argv[1])];
    strcpy(stringa, argv[1]);
    int lunghezza = strlen(stringa);
    int pid;
    pid = fork();

    if (pid == 0)
    {
        for (int i = 0; i < lunghezza; i++)
        {
            stringa[i] = toupper(stringa[i]);
        }
        printf("La stringa in maiuscolo è: %s", stringa);
        exit(1);
    }
    else
    {
        wait(&pid);
    }

    printf("\nProgramma finito");
    return 0;
}

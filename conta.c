#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
    int pid;
    pid = fork(); // creo un processo figlio
    if (pid > 0)  // se il pid è maggiore di 0 allora lavoro sul processo padre
    {

        printf("Sono il padre. Il mio PID è: %d.\n", getpid());
        printf("Sono il padre. Mio figlio ha PID: %d.\n", pid);
        for (int i = 0; i < 20; i++)
        {
            printf("Numero: %d\n", i);
        }
        wait(&pid);
    }
    else if (pid == 0) // se il pid è uguale a 0 lavoro sul processo figlio
    {
        printf("-------------\n");
        printf("Sono il figlio. Il mio PID è: %d\n", getpid());
        printf("Sono il figlio. Mio padre ha PID: %d\n", getppid());
        for (int i = 0; i < 10; i++)
        {
            printf("Numero: %d\n", i);
        }
        exit(1);
    }
    else
        printf("Errore nella generazione del figlio");
    return 0;
}

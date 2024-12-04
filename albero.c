#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
    int pid1, pid2, pid3, pid4, pid5;

    pid1 = fork();
    if (pid1 > 0)
    { // padre
        printf("Sono il padre. Il mio PID è: %d.\n", getpid());
        pid2 = fork();
        if (pid2 == 0)
        { // figlio 1
            printf("Sono il 1 figlio. Il mio PID è: %d.\n", getpid());
            pid3 = fork();
            if (pid3 == 0)
            { // figlio 3
                printf("Sono il 1 nipote del padre. Il mio PID è: %d.\n", getpid());
                exit(0);
            }
            wait(&pid3);
            exit(0);
        }
        wait(&pid2);
    }
    else if (pid1 == 0)
    {
        printf("Sono il 2 figlio. Il mio PID è: %d.\n", getpid());
        pid4 = fork();
        if (pid4 == 0)
        {
            printf("Sono il 2 nipote del padre. Il mio PID è: %d.\n", getpid());
            exit(0);
        }
        pid5 = fork();
        if (pid5 == 0)
        {
            printf("Sono il 3 nipote del padre. Il mio PID è: %d.\n", getpid());
            exit(0);
        }
        wait(&pid4);
        wait(&pid5);
        exit(0);
    }
    wait(&pid1);
    printf("\nProgramma terminato.");
    return 0;
}

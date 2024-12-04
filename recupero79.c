#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
    int pid1, pid2, pid3;

    printf("Io sono il padre A, il mio PID: %d. \n", getpid());

    pid1 = fork();
    if (pid1 == 0)
    {
        printf("Io sono il figlio B, il mio PID: %d, il mio nome è Qui. \n", getpid());
        exit(0);
    }

    pid2 = fork();
    if (pid2 == 0)
    {
        printf("Io sono il figlio C, il mio PID: %d, il mio nome è Quo. \n", getpid());
        exit(0);
    }

    pid3 = fork();
    if (pid3 == 0)
    {
        printf("Io sono il figlio D, il mio PID: %d, il mio nome è Qua. \n", getpid());
        exit(0);
    }

    wait(&pid1);
    wait(&pid2);
    wait(&pid3);

    return 0;
}

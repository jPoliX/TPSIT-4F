/*
Scrivere un programma concorrente che realizzi il seguente comando:

cat costituzione.txt | more
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
    int p1p0[2], pid, pid2;
    pipe(p1p0);

    pid = fork();

    if (pid == 0)
    {
        close(p1p0[0]);
        close(1);
        dup(p1p0[1]);
        close(p1p0[1]);
        execl("/bin/cat", "cat", argv[1], (char *)0);
    }

    pid2 = fork();

    if (pid2 == 0)
    {
        close(p1p0[1]);
        close(0);
        dup(p1p0[0]);
        close(p1p0[0]);
        execl("/bin/more", "more", argv[1], (char *)0);
    }

    wait(&pid);
    wait(&pid2);

    return 0;
}
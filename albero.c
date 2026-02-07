/**
 * @file process_tree.c
 * @brief Creazione di una gerarchia di processi tramite fork().
 *
 * Questo programma dimostra l'uso della system call fork() per creare
 * una struttura di processi composta da:
 * - un processo padre
 * - due figli
 * - tre nipoti complessivi
 *
 * Ogni processo stampa il proprio PID e termina correttamente
 * sincronizzandosi con il padre tramite wait().
 */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

/**
 * @brief Funzione principale del programma.
 *
 * Il processo iniziale crea due processi figli.
 * - Il primo figlio genera a sua volta un nipote.
 * - Il secondo figlio genera due nipoti.
 *
 * Il padre attende la terminazione di tutti i processi figli
 * prima di terminare il programma.
 *
 * @param argc Numero di argomenti da linea di comando
 * @param argv Vettore degli argomenti
 * @return int Stato di terminazione del programma
 */
int main(int argc, char *argv[])
{
    int pid1, pid2, pid3, pid4, pid5;

    /**
     * @brief Creazione del primo figlio
     */
    pid1 = fork();

    if (pid1 > 0)
    { 
        /** @brief Codice eseguito dal processo padre */
        printf("Sono il padre. Il mio PID è: %d.\n", getpid());

        /**
         * @brief Creazione del secondo figlio (dal padre)
         */
        pid2 = fork();

        if (pid2 == 0)
        { 
            /** @brief Primo figlio del padre */
            printf("Sono il 1 figlio. Il mio PID è: %d.\n", getpid());

            /**
             * @brief Creazione del primo nipote
             */
            pid3 = fork();

            if (pid3 == 0)
            { 
                /** @brief Nipote generato dal primo figlio */
                printf("Sono il 1 nipote del padre. Il mio PID è: %d.\n", getpid());
                exit(0);
            }

            /** @brief Il primo figlio attende il proprio figlio */
            wait(&pid3);
            exit(0);
        }

        /** @brief Il padre attende la terminazione del primo figlio */
        wait(&pid2);
    }
    else if (pid1 == 0)
    {
        /** @brief Secondo figlio del padre */
        printf("Sono il 2 figlio. Il mio PID è: %d.\n", getpid());

        /**
         * @brief Creazione del secondo nipote
         */
        pid4 = fork();

        if (pid4 == 0)
        {
            /** @brief Nipote generato dal secondo figlio */
            printf("Sono il 2 nipote del padre. Il mio PID è: %d.\n", getpid());
            exit(0);
        }

        /**
         * @brief Creazione del terzo nipote
         */
        pid5 = fork();

        if (pid5 == 0)
        {
            /** @brief Secondo nipote generato dal secondo figlio */
            printf("Sono il 3 nipote del padre. Il mio PID è: %d.\n", getpid());
            exit(0);
        }

        /** @brief Il secondo figlio attende i suoi due figli */
        wait(&pid4);
        wait(&pid5);
        exit(0);
    }

    /** @brief Il padre attende la terminazione del secondo figlio */
    wait(&pid1);

    printf("\nProgramma terminato.");
    return 0;
}

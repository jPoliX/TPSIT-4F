/*Scrivere un programma in linguaggio C che legge da argv una serie di stringhe,
le ordina usando un algoritmo di ordinamento a scelta e scrive il risultato
sia a video che su un file il cui nome risiede in argv[1].

Esempio:

$ ./a.out file.txt ciao a tutti
a
ciao
tutti

$ cat file.txt
a
ciao
tutti*/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>

void ordina(int argc, char *argv[])
{
   int i, j;
   char *temp;

   for (i = 0; i < argc; i++)
   {
      for (j = 2; j < (argc - i - 1); j++)
      {
         if (strcmp(argv[j], argv[j + 1]) > 0)
         {
            temp = argv[j];
            argv[j] = argv[j + 1];
            argv[j + 1] = temp;
         }
      }
   }
}

int main(int argc, char *argv[])
{
   if (argc < 2)
   {
      printf("Numero argomenti sbagliato\n");
      exit(1);
   }

   int fd, nread;
   char buff;

   ordina(argc, argv);
   fd = open(argv[1], O_WRONLY | O_CREAT, 0777);

   for (int i = 2; i < argc; i++)
   {
      write(fd, argv[i], strlen(argv[i]));
      write(1, argv[i], strlen(argv[i]));
   }

   return 0;
}

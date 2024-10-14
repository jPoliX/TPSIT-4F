/*Si crei un programma che nel momento dell'esecuzione popoli l'array
argv[] con una serie di numeri. Esempio: $ ./a.out 1 5 9 6
Il programma deve calcolare la media dei numeri inseriti da riga di 
comando.
Suggerimento: si usi una funzione per calcolare la somma dei numeri.  */

#include <stdio.h>
#include <stdlib.h>

int sommaCalcolata(int n, char *argv[]){
    int somma;
    for(int i=1;i<n;i++){
        somma+=atoi(argv[i]);
    }
    return somma;
}

int main(int argc, char *argv[])
{
    int somma=0;
    double media=0;
    somma=sommaCalcolata(argc, argv);
    media=(double) somma/ (argc-1);
    printf("media: %.2f", media);
    
   return 0;
}

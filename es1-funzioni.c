/*Leggere in input da tastiera due numeri maggiori di 0 e farne la somma.  */

#include <stdio.h>
#include <string.h>

int somma(int n1, int n2){
    return n1+n2;
}

int main(int argc, char *argv[])
{
    int n1,n2;
    printf("Inserisci il primo numero: \n");
    scanf("%d", &n1);
    printf("Inserisci il secondo numero: \n");
    scanf("%d", &n2);
    
    printf("somma: %d", somma(n1,n2));
   return 0;
}

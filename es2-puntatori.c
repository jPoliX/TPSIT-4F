/*Dati due numeri si scriva in linguaggio C una funzione di tipo void denominata scambia,
che dati in input 2 numeri li scambi.*/

#include <stdio.h>

void scambia(int *n1, int *n2)
{
    int scambio = *n1;
    *n1 = *n2;
    *n2 = scambio;
}

int main(int argc, char *argv[])
{
    int n1, n2;
    printf("Inserisci il primo numero: \n");
    scanf("%d", &n1);
    printf("Inserisci il secondo numero: \n");
    scanf("%d", &n2);

    scambia(&n1, &n2);

    printf("primo numero: %d\n", n1);
    printf("secondo numero: %d", n2);
}

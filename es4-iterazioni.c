/*Dato N un numero intero positivo, generare e visualizzare in ordine crescente i numeri pari
minori o uguali a N.*/

#include <stdio.h>

int main()
{
    int N;
    do
    {
        printf("Inserisci n positivo: ");
        scanf("%d", &N);
    } while (N < 0);

    for (int i = 0; i <= N; i += 2)
    {
        printf("\nNumero: %d\n", i);
    }

    return 0;
}

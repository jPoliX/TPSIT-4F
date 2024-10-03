/*Dato N un numero intero positivo, generare e visualizzare in ordine
decrescente i primi N numeri interi positivi.*/

#include <stdio.h>

int main()
{
    int N;
    do
    {
        printf("inserisci N: ");
        scanf("%d", &N);
    } while (N < 0);
    for (int i = N; i > 0; i--)
    {
        printf("Numero: %d\n", i);
    }

    return 0;
}

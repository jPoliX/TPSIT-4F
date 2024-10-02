/*Dato N un numero intero positivo, generare e visualizzare in ordine crescente i primi N numeri
interi positivi.*/

#include <stdio.h>

int main()
{
    int N;
    do
    {
        printf("Inserisci N positivo: ", N);
        scanf("%d", &N);
    } while (N < 0);

    for (int i = 1; i < N; i++)
    {
        printf("\nNumero: %d\n", i);
    }

    return 0;
}

    /*Dato N un numero intero positivo, generare e visualizzare in ordine
    crescente i numeri compresi maggiori uguali di -N e minori uguali di N.*/

    #include <stdio.h>

    int main()
    {
        int N;
        do
        {
            printf("inserisci N: ");
            scanf("%d", &N);
        } while (N < 0);
        for (int i = -N; i >= -N && i <= N; i++)
        {
            printf("Numero: %d\n", i);
        }

        return 0;
    }

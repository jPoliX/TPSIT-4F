/*Dati due numeri interi positivi N1 e N2 con N2>N1, generare e
visualizzare in ordine crescente i numeri interi compresi
nell'intervallo chiuso [N1,N2]. */

#include <stdio.h>

int main()
{
    int n1, n2;
    do
    {
        printf("Inserisci il primo numero: \n");
        scanf("%d", &n1);
        printf("Inserisci il secondo numero: \n");
        scanf("%d", &n2);
    } while (n1 > n2 || n1 < 0);

    for (int i = n1; i >= n1 && i <= n2; i++)
    {
        printf("\nNumero: %d\n", i);
    }

    return 0;
}

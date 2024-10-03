/*Dati due numeri interi positivi N1 ed N2 calcolare, mediante la somma
ripetuta, il prodotto dei due numeri e visualizzarli.*/

#include <stdio.h>

int main()
{
    int n1, n2, prodotto = 0;
    do
    {
        printf("Inserisci il primo numero: \n");
        scanf("%d", &n1);
        printf("Inserisci il secondo numero: \n");
        scanf("%d", &n2);
    } while (n1 < 0 || n2 < 0);

    for (int i = 0; i < n2; i++)
    {
        prodotto += n1;
    }
    printf("Il prodotto è: %d", prodotto);
    return 0;
}

/*Dati due numeri interi positivi N1 e N2, verificare se N1 è il quadrato 
di N2. */

#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
	int n1, n2;
    do
    {
        printf("Inserisci il primo numero: \n");
        scanf("%d", &n1);
        printf("Inserisci il secondo numero: \n");
        scanf("%d", &n2);
    } while (n1 < 0 && n2 < 0);
    
    
    
    if(sqrt(n1)==n2){
        printf("n1 è il quadrato di n2");
    } else
    printf("non è il quadrato di n2");

	return 0;
}

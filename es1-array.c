#include <stdio.h>

int main(int argc, char *argv[])
{
    int n=4, numero;
    int array[n];
    
    for(int i=0;i<n;i++){
        printf("Inserisci un numero: ");
        scanf("%d", &array[i]);
    }
    
    for(int i=0;i<n;i++){
        printf("numero: %d\n", array[i]);
    }
}

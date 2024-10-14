#include <stdio.h>

int main(int argc, char *argv[])
{
    int n=5, numero;
    int array[n];
    
    for(int i=0;i<n;i++){
        printf("Inserisci un numero: ");
        scanf("%d", &array[i]);
    }
    
    for(int i=n-1;i>=0;i--){
        printf("numero: %d\n", array[i]);
    }
}

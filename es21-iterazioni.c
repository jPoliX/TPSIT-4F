/*Dato un numero intero positivo N verificare se N è un numero primo.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
	int N, resto;

	do {
		printf("Inserisci un numero: ");
		scanf("%d", &N);
	} while(N<2);

	for(int i=N-1; i>1; i=i-1){
	    resto=N%i;
	    if(resto==0){
	        printf("Non è un numero primo\n");
	       return 0;
	    } 
	}
	
	printf("è un numero primo\n");
	return 0;
}

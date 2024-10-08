/*Dato un numero N calcolare e visualizzare tutte le coppie di numeri minori di N che
danno per somma il numero stesso. Non considerare la proprietà commutativa. */

#include <stdio.h>

int main(int argc, char *argv[])
{
	int N, i=1;

	do {
		printf("Inserisci un numero: ");
		scanf("%d", &N);
	} while(N<0);
	
	int j= N-1;
	do{
	    printf("Coppia: %d %d\n", j,i);
	    i++;
	    j--;
	    
	}while(i<=N);
	return 0;
}

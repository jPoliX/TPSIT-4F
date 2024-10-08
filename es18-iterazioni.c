/*Data una misura di tempo espressa in secondi S1, convertirla in ore H,
minuti M e secondi S.

Esempio: se il numero dei secondi è 1630, si dovrà ottenere, in uscita
dal programma, 0h 27m 10s.*/

#include <stdio.h>

int main()
{
    int secondi=0, s, m, h;
    do{
        printf("Inserisci i secondi: ");
        scanf("%d", &secondi);
    }while (secondi < 0);
    
    m = secondi / 60;
    s = secondi % 60;
    h = m / 60;
    m = m % 60;
    
    printf("%dh %dm %ds ", h, m, s);
    return 0;
}

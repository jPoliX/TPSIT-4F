/*Si legga da riga di comando una stringa e la si mostri in output
invertita. Per fare l'inversione si implementi la funzione inverti.

Esempio:
$./a.out ciao
oaic */

#include <stdio.h>
#include <string.h>

void inverti(char s[]){
    int lunghezza=strlen(s)-1;
    char s2;
    
    for(int i=0;i<lunghezza;i++){
        s2=s[i];
        s[i]=s[lunghezza];
        s[lunghezza]=s2;
        lunghezza--;
    }
}

int main(int argc, char *argv[])
{
    if(argc!=2){
        printf("non valido\n");
        return 0;
    }
    
    inverti(argv[1]);
    printf("stringa invertita: %s", argv[1]);
 
 
   return 0;
}

/*Si scriva un programma in linguaggio C che implementi una funzione
denominata palindroma che prenda in input una stringa e restituisca
1 se la stringa è palindroma altrimenti -1

esempio:
$ ./a.out anna
$ anna è una stringa palindroma

esempio:
$ ./a.out ciao
$ ciao non è una stringa palindroma */

#include <stdio.h>
#include <string.h>

int palindroma(char s[]){
    int lunghezza=strlen(s)-1;
    
    
    for(int i = 0 ; i <= lunghezza - i ; i++){
        if( s[i] != s[lunghezza - i]){
            return -1;
        }
    }
    return 1;
}

int main(int argc, char *argv[])
{
    if(argc!=2){
        printf("non valido\n");
        return 0;
    }
    
    if(palindroma(argv[1])>0){
        printf("La parola è palindroma\n");
    } else printf("la parola non è palindroma\n");
   return 0;
}

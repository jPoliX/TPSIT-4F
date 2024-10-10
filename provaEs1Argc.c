/*Scrivi un programma che legge da argv[1] un numero intero positivo (N) e poi
disegna a terminale un quadrato vuoto composto di asterischi (‘*’)
con il lato lungo N:

Per N pari a 3 il programma stampa:

***
* *
***
Per N pari a 5 il programma stampa:

*****
*   *
*   *
*   *
*****
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int N = atoi(argv[1]);
    
    for(int i=0; i<N; i++){
          if(i == 0 || i == N-1){
              printf(" *");
          }else 
          printf(" ");
    }
    return 0;
}

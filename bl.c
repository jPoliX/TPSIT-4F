#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define lungh 01

int main()
{
    FILE *puntaFile;
    char nome[FILENAME_MAX], buffer[lungh];
    int nr = 0, nc = 0;

    puntaFile = fopen("testoDaLeggere.txt", "r");
    if (puntaFile == NULL)
    {
        printf("Errore nell'apertura del file");
        exit(1);
    }
    else
    {
        while (fgets(buffer, lungh, puntaFile) != NULL)
        {
            nr++;
            nc = nc + strlen(buffer) - 1;
        }
    }

    fclose(puntaFile);
    printf("Totale righe: %d\n Totale caratteri: %d\n", nr, nc);

    return 0;
}
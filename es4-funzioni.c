/*Data una serie di stringhe lette da riga di comando scrivere un programma che
conta quante sono le consonanti e conta quante sono le vocali.
Al termine del programma si vuole visualizzare in output i due conteggi.

Osservazione:
si strutturi il programma usando almeno una funzione

Nota:
per semplicità si decide che un carattere può essere una vocale oppure una
consonante.*/

#include <stdio.h>
#include <string.h>

int vocali(char stringa[])
{
    int contaVocali = 0, lunghezza = strlen(stringa);
    for (int i = 0; i < lunghezza; i++)
    {
        if (stringa[i] == 'a' || stringa[i] == 'i' || stringa[i] == 'u' || stringa[i] == 'o' || stringa[i] == 'e')
        {
            contaVocali++;
        }
    }
    return contaVocali;
}

int main(int argc, char *argv[])
{
    int contaVocali = 0, contaConsonanti = 0;

    if (argc == 1)
    {
        printf("non valido");
    }

    for (int i = 1; i < argc; i++)
    {
        contaVocali = vocali(argv[i]);
        contaConsonanti = strlen(argv[i]) - contaVocali;
    }

    printf("Vocali: %d\n", contaVocali);
    printf("Consonanti: %d\n", contaConsonanti);
    return 0;
}

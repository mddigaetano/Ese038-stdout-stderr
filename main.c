#include <stdio.h>
#include <stdlib.h>

#define MAX_STRLEN 30
#define STR_END "[fine]"

int main(int argc, char** argv) {
    char str[MAX_STRLEN];
    int scelta;
    
    printf("Inserire una stringa: ");
    scanf("%[^\n]",str);
    
    while(strcmp(str,STR_END)){
        printf("\n1-Stampa su stdout;\n2-Stampa su stderr\nSelezionare l'opzione desiderata: ");
        scanf("%d", &scelta);
        
        switch(scelta){
            case 1:
                fprintf(stdout,"%s\n",str);
                break;
            case 2:
                fprintf(stderr,"%s\n",str);
                break;
            default:
                printf("Funzione non esistente\n");
        }
        
        printf("\n\nInserire una stringa: ");
        scanf("\n%[^\n]",str);
    }
    
    printf("\nFine programma");

    return (EXIT_SUCCESS);
}
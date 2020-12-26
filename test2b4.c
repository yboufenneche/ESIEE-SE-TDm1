#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "gestionFichiers.h"

int main (int argc, char* argv[]){
    
    int i = 0;
    char* ligne = NULL;
    int fd = open(argv[1], O_RDONLY);

    do{
        ligne = litLigne(fd);
        if (ligne != NULL){
            i++;
        }
    } while (ligne != NULL);

    printf("Le nombre de ligne est: %d\n", i);

    close(fd);
        
    return 0;
}
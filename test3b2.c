#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "gestionFichiers.h"

int main (int argc, char* argv[]){
    
    int i = 0;
    int fd1 = open(argv[1], O_RDONLY);
    // int fd2 = open(argv[2], O_WRONLY | O_APPEND);
    char* ligne = NULL;

    do{
        ligne = litLigne(fd1);
        if (ligne != NULL){
            ecrireChaine(1, ligne);
        }        
    } while (ligne != NULL);

    close(fd1);

    return 0;
}
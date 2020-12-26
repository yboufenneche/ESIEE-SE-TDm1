#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "gestionFichiers.h"

int main (int argc, char* argv[]){
    
    int i = 0;
    char* ligne = NULL;

    do{
        ligne = litLigne(0);
        if (ligne != NULL){
            ecrireChaine(1, ligne);
        }        
    } while (ligne != NULL);

    return 0;
}
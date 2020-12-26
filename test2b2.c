#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "gestionFichiers.h"

int main (int argc, char* argv[]){
    
    char* ligne = NULL;
    int fd = open(argv[1], O_RDONLY);

    ligne = litLigne(fd);

    if (ligne == NULL)
    {
        printf("Ligne trop longue !\n");
    }
    else
    {
        printf("%s", ligne);
    }
      
    close(fd);
    
    return 0;
}
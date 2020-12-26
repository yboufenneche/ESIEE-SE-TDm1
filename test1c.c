#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "gestionFichiers.h"


int main (int argc, char* argv[]){
    
    int fd;
    char* t = NULL;
    int i=0;

    fd = open("fichierTest.txt", O_RDONLY);

    t = litDixCaracteres(fd);

    while (t[i] != '\0')
    {
        printf("%c", t[i]);
        i++;
    }

    printf("\n");

    close(fd);
    
    return 0;
}
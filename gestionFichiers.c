#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "gestionFichiers.h"

// lire 10 caractères d'un fichier et les retourner sous forme d'un tableau
char* litDixCaracteres(int fd)
{
    char* tab = malloc(sizeof(char)*10);
    read(fd, tab, 10);
    close(fd);

    return tab;
}

// lire une ligne dans un texte
char* litLigne(int fd)
{
    char* buffer = malloc(sizeof(char)*TAILLEBUF);
    char* ligne = NULL;
    int eol_found = 0;
    int i = 0;
    int n = 0;
    int t_ligne = 0;

    int n_cars_lus = read(fd, buffer, TAILLEBUF);

    if(n_cars_lus == 0){
        return NULL;
    }
    else
    {
       while (i <= n_cars_lus && eol_found == 0){
            if (buffer[i] == '\n' ){
                eol_found = 1;
            }
            else
            {
                i++;
            }
        }
    
        t_ligne = i;

        if(eol_found == 0) {
            ligne = NULL;
        }
        else
        {
            lseek(fd, -n_cars_lus, SEEK_CUR);
            ligne = malloc(sizeof(char)*t_ligne);
            n = read(fd, ligne, t_ligne + 1);
            // printf("Taille ligne = %d\n", t_ligne);
            
            return ligne;
        } 
    }
}

// écrire une chaîne dans un fichier
void ecrireChaine(int fd, char* s){
    write(fd, s, strlen(s));
}
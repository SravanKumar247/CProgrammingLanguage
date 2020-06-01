/*
Voici le code complet d'affichage des lignes de longueur supérieure ou égale à 80 avec les ajouts nécessaires pour que le code marche bien.
*/

#include <stdio.h>
#define MAXLINE 1000
#define LONGUEURLIGNE 80


int getline1(char line[], int maxline);


int main(int argc, char* argv[])
{
   
    int len;
    char line[MAXLINE];
    char longest[MAXLINE];


    while((len = getline1(line, MAXLINE)) > 0)
    {
        if(len > LONGUEURLIGNE)
        {
            printf("%s\n",line);                         // Il faut ajouter \n entre les guillements pour que le résultat soit
        }                                                 // visible dans l'exécutable
    }

    return 0;

}

int getline1(char s[], int lim)
{ 
    int c,i;

    for(i=0; i<lim-1 && (c=getchar())!= EOF && (c!='\n'); ++i)
        s[i]=c;
    if(s[i]=='\n'){
        s[i]=c;
        ++i;

    }

    s[i]='\0';
    return i;

}


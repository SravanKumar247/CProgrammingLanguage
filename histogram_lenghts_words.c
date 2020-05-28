//Working versions with changes to add to make work the version in the book of exercices of "Exercices corrigés sur le Langage C" proposed
//by Kernighan & Ritchie

#include<stdio.h>
#define HISTMAX 15
#define MOTMAX 11
#define DEDANS 1
#define DEHORS 0

int main()
{
    int c, i, j, nc, etat;                   //add j to the original text
    int valeurmax;
    int depassent=0;                       //must be initialized for the code to work fine
    int lm[MOTMAX];

    etat = DEHORS;
    nc=0;
    for(i=0;i<MOTMAX; i++)
    {
        lm[i]=0;
    }

    while( (c=getchar()) != EOF){
        if(c==' ' || c=='\n' || c=='\t'){
            etat=DEHORS;
            if(nc >0)
                if(nc<MOTMAX)
                    ++lm[nc];
                else
                    ++depassent;
            nc=0;
                                        }                                          
        else if (etat=DEHORS)
        {
            etat=DEDANS;
            nc=1;
        }        
        else
        {
            ++nc;
        }
                 
                
    }    //fin de while

    valeurmax=0;
    for(i=1;i<MOTMAX;i++)
    {
        if(lm[i]> valeurmax)
            valeurmax=lm[i];
    }

    for(i=HISTMAX;i>0;--i)
    {
        for(j=1;j<MOTMAX;j++)
        {
            if((lm[j]*HISTMAX/valeurmax) >=i)
                printf("   *   ");
            else
                printf("     ");
        }
        putchar('\n');                  //add the apostrophe to the original
    }

    for (i=1;i<MOTMAX;i++)
    {
        printf("%4d ",i);
    }
    putchar('\n');                   //add the apostrophes
    for(i=1; i<MOTMAX;i++)
    {
        printf("%4d ",lm[i]);
    }
    putchar('\n');                      //ajouter les apostrophes

    if(depassent>0)
        printf("Il y a %d mots de longueur >= %d\n",depassent,MOTMAX);                       //indenter l'expression

}

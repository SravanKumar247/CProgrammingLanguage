#include <stdio.h>
#define MAXLINE 1000

int getline1(char line[], int maxline);               //need to replace the original getline because getline already exists in stdio.h
void copy(char to[], char from[]);

int main(int argc, char* argv[])
{
   
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max=0;
    while((len = getline1(line, MAXLINE)) > 0)     //need to replace the original getline because getline already exists in stdio.h
    {
        if(len >max)
        {
            max=len;
            copy(longest,line);
        }
    }

    if ( max>0 )
    {
        printf("%s",longest);
    }

    return 0;

}

int getline1(char s[], int lim)          //need to replace the original getline because getline already exists in stdio.h
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

void copy(char to[], char from[])
{
    int i=0;
    while((to[i]=from[i])!='\0')
    {
        ++i;
    }
    
}




#include <stdio.h>
#define MAXLINE 1000

int getline1(char s[], int lim);
void copy(char to[], char from[]);


int main(int argc, char* argv[])
{
    FILE *fp;
    char *filename;
    char ch;

    if(argc<2)
    {
        printf("Missing filename\n");
        return(1);
    }
    else
    {
        filename=argv[1];
        printf("Filename : %s\n",filename);
        
    }

    fp = fopen(filename,"r");
    
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max=0;
    while( ((fgets(line, sizeof line,fp)) != NULL) && (len = getline1(line, MAXLINE)) > 0)
    {
        printf("\"%s\"\n",line);
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

int getline1(char s[], int lim)
{ 
    int c,i;

    for(i=0; i<lim-1 && (s[i]!= EOF) && (s[i]!='\n'); ++i)
    if(s[i]=='\n'){
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


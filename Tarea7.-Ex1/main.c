#include <stdio.h>
#include <stdlib.h>
#define N 100
void Read(char Cadena[]);
char GiveMeTheChar();
int CountChars(char Cadena[],char c);

int main()
{
    int cont;
    char c,Cadena[N];
    Read(Cadena);
    c=GiveMeTheChar();
    cont=CountChars(Cadena,c);
    printf("El caracter aparece %d veces en la cadena",cont);
    return 0;
}

void Read(char Cadena[])
{
   // int i;
    printf("Dame la cadena de caracteres\n");
    gets(Cadena);
}

char GiveMeTheChar()
{
    char c;
    printf("Ingrese el caracter\n");
    fflush(stdin);
    scanf("%s",&c);
    return(c);
}

int CountChars(char Cadena[],char c)
{
    int i,cont=-1;

    for(i=0;i<N;i++)
    {
        if(Cadena[i]==c)
        {
            cont++;
        }
    }
    return(cont);
}


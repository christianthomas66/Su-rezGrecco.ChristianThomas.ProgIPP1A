#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int contarCaracteres(char cadena[], char caracter);


int main()
{
    char cadena[30];
    char caracter;
    int cantidad;

    printf("Ingrese una cadena de caracteres:");
    gets(cadena);

    printf("Ingrese un caracter: ");
    scanf("%c",&caracter);


    cantidad = contarCaracteres(cadena,caracter);
    printf("%d", cantidad);

    return 0;
}

int contarCaracteres(char cadena[], char caracter)
{
    int contador = 0;
    for(int i = 0; cadena[i] != '\0'; i++)
    {
        if(cadena[i] == caracter)
        {
            contador++;
        }
    }
    return contador;
}
/*
int contarCaracteres(char* cadena, char caracter)
{
    int cant = 0;
    for(int i = 0; cadena[i] != '\0'; i++)
    {
        if(cadena[i] == caracter)
        {
            cant++;
        }
    }
    return cant;
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define TAM 4

typedef struct
{
    int id;
    char procesador[30];
    char marca[30];
    float precio;

}eNotebook;

void ordenarNotebooks(eNotebook lista[], int tam);
void mostrarNotebooks(eNotebook* x,int tam);
void mostrarNotebook(eNotebook x);


int main()
{

    eNotebook listaNotebooks[TAM] = {{1,"i5 9400f", "hp", 40000},{2,"amd athlon x4","hitachi",45000}, {3,"i9 9800k", "hp", 60000}, {4,"amd phenom x4", "lenovo",50000 }};

    printf("Ordenamiento array\n\n");

    ordenarNotebooks(listaNotebooks, TAM);
    mostrarNotebooks(listaNotebooks, TAM);


    return 0;
}


void ordenarNotebooks(eNotebook lista[], int tam)
{
    eNotebook aux;
     for(int i = 0; i < tam -1 ; i++)
    {
        for(int j = i + 1; j < tam ; j ++)
        {
               if(strcmp(lista[i].marca,lista[j].marca) == -1)
               {
                 aux = lista[i];
                 lista[i] = lista[j];
                 lista[j] = aux;
               }

               else if(strcmp(lista[i].marca,lista[j].marca) == 0 && lista[i].precio < lista[j].precio )
               {
                    aux = lista[i];
                 lista[i] = lista[j];
                 lista[j] = aux;
               }
        }
    }
}


void mostrarNotebooks(eNotebook* lista,int tam)
{


    printf("**Lista de Notebooks**\n");
    printf("ID         Marca           Precio                Procesador\n");
    for(int i = 0; i < tam ; i++)
    {
            mostrarNotebook(lista[i]);
    }

}
void mostrarNotebook(eNotebook lista)
{
    printf("%d     %10s      %.2f     %20s\n",lista.id,lista.marca,lista.precio,lista.procesador);
}

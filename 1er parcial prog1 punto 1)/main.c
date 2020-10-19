#include <stdio.h>
#include <stdlib.h>


float aplicarDescuento(float precioProducto);


int main()
{
    float precio;

    printf("Ingrese precio a hacer el descuento: ");
    scanf("%f", &precio);

    printf("Descuento\n\n");
    printf("%f", aplicarDescuento(precio));

    return 0;
}


float aplicarDescuento(float precioProducto)
{
    float total = 0;

    total = precioProducto - (precioProducto * 0.05);

    return total;
}

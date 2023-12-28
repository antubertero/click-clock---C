#include <stdio.h>
#include <stdlib.h>
#include "tiempo.h"

int main()
{

    int salida;

    do
    {

        fecha hoy = FechaActual();
        mostrarFechaCompleto(hoy);
        printf("\ningresar un 1 para salir, cualquier otro valor para actualizar:  ");
        scanf("%i", &salida);
        fflush(stdin);
        system("cls");


    }
    while(salida != 1);
    system("cls");
    printf("\n\n\n\n\n      Gracias por usar  Click clock\n\n\n\n\n\n");

    return 0;
}

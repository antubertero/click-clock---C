#include <stdio.h>
#include <stdlib.h>
#include "tiempo.h"
#include "time.h"


/// https://www.youtube.com/watch?v=c0ZMWN1RLt4

fecha FechaActual(){

    time_t t;
    t = time(NULL);

    struct tm * fechaAct;
    fechaAct = localtime(&t);
    fecha aux;
    aux.segundo = fechaAct->tm_sec;
    aux.minuto = fechaAct->tm_min;
    aux.hora = fechaAct->tm_hour;
    aux.dia = fechaAct->tm_mday;
    aux.mes = fechaAct->tm_mon + 1;
    aux.year = fechaAct->tm_year + 1900;

    return aux;



}

void mostrarMDA(fecha fechaAMostrar){

printf("%i / %i / %i", fechaAMostrar.dia, fechaAMostrar.mes, fechaAMostrar.year);


}

void mostrarFechaCompleto(fecha fechaMostrar){

mostrarMDA(fechaMostrar);
printf(" - %i : %i : %i", fechaMostrar.hora, fechaMostrar.minuto, fechaMostrar.segundo);

}

#ifndef TIEMPO_H_INCLUDED
#define TIEMPO_H_INCLUDED

typedef struct{

int segundo, minuto, hora, dia, mes, year;

}fecha;

fecha FechaActual();
void mostrarMDA(fecha fechaAMostrar);
void mostrarFechaCompleto(fecha fechaMostrar);

#endif // TIEMPO_H_INCLUDED

#ifndef __COLA_H__
#define __COLA_H__

#include <stdio.h>
#include <stdlib.h>
struct listaLigada{

   int dato;
   struct listaLigada *siguiente;
};
void insertar(struct listaLigada **miCola, int num);
void mostrar(struct listaLigada **miCola);
int eliminar(struct listaLigada **miCola);
#endif

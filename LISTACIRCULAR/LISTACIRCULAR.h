#ifndef __LISTALIGADA_H__
#define __LISTALIGADA_H__

#include <stdio.h>
#include <stdlib.h>

struct ListaLigada{
  int dato;
  struct ListaLigada *siguiente;
};s
void mostrar(struct ListaLigada *milista);
void insertarinicio(struct ListaLigada **lista, int num);
#endif

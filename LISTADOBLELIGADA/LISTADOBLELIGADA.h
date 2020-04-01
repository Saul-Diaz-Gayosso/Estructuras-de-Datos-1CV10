#ifndef __LISTADOBLELIGADA_H_
#define __LISTADOBLELIGADA_H_

#include <stdio.h>
#include <stdlib.h>

struct nodo{
  int dato;
  struct nodo *anterior;
  struct nodo *siguiente;
};

void insertarinicio(struct nodo **milista, int num);
void mostraralreves(struct nodo *milista);
void mostrar(struct nodo *milista);

#endif

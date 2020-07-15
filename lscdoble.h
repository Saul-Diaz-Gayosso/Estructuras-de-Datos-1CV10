#ifndef _LSCDOBLE_H_
#define _LSCDOBLE_H_

#include<stdio.h>
#include <stdlib.h>
struct ListaCDoble
{
  int dato;
  struct ListaCDoble *siguiente;
  struct ListaCDoble *anterior;
};

struct ListaCDoble *agregarElemento (struct ListaCDoble *, int);

struct ListaCDoble *buscarEliminar (struct ListaCDoble *, int); 

int buscarElemento (struct ListaCDoble *, int);

void mostrarLista (struct ListaCDoble *);

#endif

#ifndef __PILA_H__
#define __PILA_H__

#include <stdio.h>
#include <stdlib.h>

struct Pila{
  int dato;
  struct Pila *siguiente;
};

void push(struct Pila **MiPila, int num);
int pop(struct Pila **MiPila);
int top(struct Pila *MiPila);
void mostrarpila(struct Pila **MiPila);
#endif

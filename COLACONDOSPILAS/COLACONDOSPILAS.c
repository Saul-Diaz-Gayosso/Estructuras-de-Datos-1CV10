#include "pila.h"

void
push(struct Pila **MiPila, int num){

  struct Pila *temporal = malloc(sizeof(struct Pila));
  temporal -> dato = num;
  temporal -> siguiente = *MiPila;

  if(MiPila == NULL)
  {
    return;
  }

  if(*MiPila == NULL)
  {
    *MiPila = temporal;
    return;
  } else 
  {

    *MiPila = temporal;

  }

}

int
pop(struct Pila **MiPila){

  if(*MiPila == NULL)
  {
    exit(1);
  }

  int valor = (**MiPila).dato;

  struct Pila *temporal = *MiPila;

  *MiPila = temporal -> siguiente;

  free(temporal);


  return valor;
}

int
top(struct Pila *MiPila){

  if(MiPila == NULL)
  {
    exit(1);
  }

  int valor = (*MiPila).dato;
  return valor;
}

void
mostrarpila(struct Pila **MiPila)
{
  while(*MiPila != NULL)
  {
    printf("%d\n", pop(MiPila) );
  }
}

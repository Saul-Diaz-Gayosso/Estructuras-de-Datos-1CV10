#ifndef __CIRCULAR_H_
#define __CIRCULAR_H_

#include<stdio.h>
#include<stdlib.h>

struct CCircular
{
  int dato;
  struct CCircular *sig;
};
void MostrarElemento (int e);

int MayorIgual (int e1, int e2);

int Igual (int e1, int e2);

int nuevaC (struct CCircular *c);

struct CCircular *formarC (struct CCircular *c, int e);

int primeroC (struct CCircular *c);

struct CCircular *desformarC (struct CCircular *c);

struct CCircular *nuevaC ();
 
#endif

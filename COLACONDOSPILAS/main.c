#include "pila.h"

//EJEMPLO SENCILLO

int main(void) {

  struct Pila *MiPila = NULL;
  struct Pila *MiPila2 = NULL;

  push(&MiPila, 10);
  push(&MiPila, 20);
  push(&MiPila, 30);
  push(&MiPila, 40);
  push(&MiPila, 50);
  push(&MiPila, 60);
  push(&MiPila, 70);
  push(&MiPila, 80);
  push(&MiPila, 90);

  /* Basicamente MiPila se vacia en la segunda pila (MiPila2) */
  
  while(MiPila != NULL){
    push(&MiPila2, pop(&MiPila));
  }

  mostrarpila(&MiPila2);
  
  return 0;
}

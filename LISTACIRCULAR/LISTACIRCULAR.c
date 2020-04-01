#include "listaligadacircular.h"

void mostrar(struct ListaLigada *milista){

  struct ListaLigada *temporal = milista;

  if(milista != NULL){

    do{
      printf("%d\n", temporal -> dato);
      temporal = temporal -> siguiente;
    } while(temporal != milista);

  }

}

void insertarinicio(struct ListaLigada **milista, int num){

  struct ListaLigada *ultimo = malloc(sizeof(struct ListaLigada));
  struct ListaLigada *temporal = *milista;
  ultimo -> dato = num;
  ultimo -> siguiente = *milista;


  if (*milista != NULL) {

    while(temporal -> siguiente != *milista){
      temporal = temporal -> siguiente;
    }

    temporal -> siguiente = ultimo;


  } else {

    temporal -> siguiente = ultimo;

  }
  *milista = ultimo;


}

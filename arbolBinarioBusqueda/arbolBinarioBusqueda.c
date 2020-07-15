#include "arbolBinarioBusqueda.h"

struct Nodo* insertar(struct Nodo *raizArbol, int datoInsertar) {

	 struct Nodo *nuevo = NULL;

   if (raizArbol == NULL) 
   {
		nuevo = malloc(sizeof(struct Nodo));
		
 		if (nuevo == NULL) 
		{
 			return NULL;
 		}
		nuevo->dato = datoInsertar;
		nuevo->hijoDerecho = NULL;
		nuevo->hijoIzquierdo = NULL;
		return nuevo;
   }

		if (raizArbol -> dato == datoInsertar) 
		{
			return raizArbol;
		}
		if (datoInsertar > raizArbol -> dato) 
		{

			raizArbol -> hijoDerecho = insertar(raizArbol -> hijoDerecho, datoInsertar);

		} 
		else 
		{

			raizArbol -> hijoIzquierdo = insertar(raizArbol -> hijoIzquierdo, datoInsertar);

		}

		return raizArbol;
}

int buscar(struct Nodo *raiz, int datoABuscar)
{

	if (raiz == NULL) 
	{

		return 0;

	} 
	else if (raiz -> dato == datoABuscar) 
	{

		return 1;

	}	
	else if (datoABuscar < raiz->dato) 
	{

		return buscar(raiz -> hijoIzquierdo, datoABuscar);

	}
	else
	{
		return buscar(raiz -> hijoDerecho, datoABuscar);

	}

}

void mostrar(struct Nodo *raiz)
{
  if (raiz == NULL)
  {
  		return;
  }

  mostrar (raiz -> hijoIzquierdo);
  printf ("%d\n", raiz -> dato);
  mostrar (raiz -> hijoDerecho);
}

#include"lscdoble.h"

struct ListaCDoble *
agregarElemento (struct ListaCDoble *lista, int dato)
{

  //Agrega elementos al final de la lista

  struct ListaCDoble *aux;
  struct ListaCDoble *fin;

  struct ListaCDoble *nuevo = NULL;

  nuevo = (struct ListaCDoble *) malloc (sizeof (struct ListaCDoble));

  nuevo->dato = dato;

  nuevo->siguiente = NULL;
  nuevo->anterior = NULL;

  if (lista == NULL)
  {
      lista = nuevo;
      lista->siguiente = lista;
      lista->anterior = lista;
  }
  else
  {
      fin = lista;
      fin = fin->siguiente;
      while (fin->siguiente != lista)
	  {
		  fin = fin->siguiente;
	  }

      fin->siguiente = nuevo;
      lista->anterior = nuevo;
      nuevo->siguiente = lista;
      nuevo->anterior = fin;
  }

  return lista;
}

void
mostrarLista (struct ListaCDoble *lista)
{
  struct ListaCDoble *aux;
  aux = lista;

  if (aux == NULL)
  {
      //printf ("");
      return;
  }

  printf ("%d ", aux->dato);
  aux = aux->siguiente;

  while (aux != lista)
  {

      printf ("%d ", aux->dato);

      aux = aux->siguiente;

  }
}


int
buscarElemento (struct ListaCDoble *lista, int dato)
{
  struct ListaCDoble *fin;
  fin = lista;
  
  if (fin->dato == dato)
  {
      return 1;
  }
  fin = fin->siguiente;
  
  while (fin != lista)
  {
      if (fin->dato == dato)
	  {
		return 1;
	  }
      fin = fin->siguiente;
  }

  return 0;
}

struct ListaCDoble *
buscarEliminar (struct ListaCDoble *lista, int dato)
{
  struct ListaCDoble *fin;
  struct ListaCDoble *aux;
  struct ListaCDoble *aux2;
  aux2 = lista;
  fin = lista;
  
  if (lista->dato == dato)
  {
  	while (fin->siguiente != lista)
	{
	  
	  fin = fin->siguiente;
	  
	}
      printf ("%d :)! Eliminado\n\n", lista->dato);
      
      aux = lista;
      lista = lista->siguiente;
      lista->anterior = fin;
      fin->siguiente = lista;
      return lista;
  }
  fin = fin->siguiente;
  
  while (fin != lista)
  {
    if (fin->dato == dato)
	{
	  printf ("%d Eliminado\n\n", fin->dato);
	  aux = fin->siguiente;
	  while (aux2->siguiente != fin)
	  {
	      aux2 = aux2->siguiente;
	  }
	  aux2->siguiente = aux;
	  aux->anterior = aux2;
	  free (fin);
	  return lista;
	}
      fin = fin->siguiente;
  }
  printf ("%d\n", dato);
  return lista;
}

#include "cola.h"

void mostrar(struct Cola **MiCola){

   while ((*MiCola) != NULL) 
   {
      printf("%d\n", eliminar(MiCola));
   }
}

void insertar(struct Cola **MiCola, int num){

   struct Cola *nodotemp = malloc(sizeof(struct Cola));
   struct Cola *ultimo = *MiCola;

   nodotemp->dato = num;
   nodotemp->siguiente = NULL;

   if (*MiCola == NULL)
   {

    	*MiCola = nodotemporal;
	   	return;
   } 
   else{

      	while (ultimo -> siguiente != NULL)
		{ 
         	ultimo = ultimo -> siguiente;
      	}
      ultimo -> siguiente = nodotemp;
   }
}

int eliminar(struct Cola **MiCola){

   if(*MiCola == NULL)
   {
      exit(1);
   }

   int num = (**MiCola).dato;

   struct Cola *temporal = *MiCola;

   *MiCola = temporal->siguiente;

   free(temporal);

   return num;
}

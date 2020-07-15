//
void InOrden(struct Arbol *arbol)
{
	if(arbol == NULL)
	{
		return;
	}
	
	InOrden(arbol -> izq);
	
	printf("%d ",arbol -> dato);
	
	InOrden(arbol -> der);
}

void PreOrden(struct Arbol *arbol)
{
	if(arbol == NULL)
	{
		return;
	}
	
	printf("%d ",arbol -> dato);
	
	PreOrden(arbol -> izq);
	
	PreOrden(arbol -> der);
}

void PostOrden(struct Arbol *arbol)
{
	if(arbol == NULL)
	{
		return;
	}
	
	PostOrden(arbol -> izq);
	
	PostOrden(arbol -> der);
	
	printf("%d ",arbol -> dato);
}


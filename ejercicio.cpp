#include <stdio.h>
#include <stdlib.h>

void main (){
	int Buff[5]={5,15,30,10,35};
	int *p;
	int i;
	p=Buff;

	printf("Contenido del arreglo a traves de punteros con arreglos:\n");
	for(i=0;i<5;i++){
	printf("%d\n", p[i]);
	}

	printf("Contenido del arreglo a traves del subíndice:\n");
	for (i=0;i<5;i++)
	{
		printf("%d\n", Buff[i]);
	}

	printf("Contenido del arreglo a traves de aritmética de punteros\n");
	for (i=0;i<5;i++)
	{
		printf("%d\n",*p);
		p++;
	}

	printf("Direcciones de memoria a traves de aritmética de punteros:\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%p\n", p++);
	}

	printf("Tamanio del arreglo:%dbytes\n", sizeof(Buff));
	printf("Tamanio del puntero:%dbytes\n", sizeof(p));
}
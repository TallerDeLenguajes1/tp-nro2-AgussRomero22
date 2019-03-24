#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int c,contpares=0, contenido;
	c=5 + rand() % (16-5); //El número que genera es 14
	int mt[15][14];
	int vec[15];
	int aux;
	printf("Matriz-----------------------------------------------------------------");
	printf("---------------------------------------Vector\n");
		for(int i=0;i<15;i++){
			aux=contpares;
			for(int t=0;t<14;t++){
				contenido=100 + rand() % (1000-100);
				mt[i][t]=contenido;
				if(contenido%2==0){
					contpares++;
				}
				printf("%d     ",mt[i][t]);
			}
			vec[i]=contpares-aux;
			printf("%d", vec[i]);
			printf("\n");
		}
	printf("Los pares por filas son:%d", contpares);
	return 0;
}
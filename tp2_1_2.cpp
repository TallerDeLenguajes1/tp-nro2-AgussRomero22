#include <stdio.h>
#include <stdlib.h>
#define N 4
#define M 5

int main(void)
{
	int f,c;
	double mt[N][M];
	double *punt[N][M];
	printf("Carga y muestra la matriz por aritmetica de punteros\n");
	for(f=0; f<N ; f++){
		for (c = 0; c<M; c++){
			mt[f][c]=rand();
			punt[f][c]=&mt[f][c];
			printf("%lf     ", *(punt[f][c]));
			punt[f][c]++;
		}
			printf("\n");
	}

	return 0;
}
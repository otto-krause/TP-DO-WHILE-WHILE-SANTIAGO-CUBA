#include <stdio.h>

int main ()
{
	int i, A, promedio,suma=0, mayor  ;
	printf("Ingrese 15 numeros para mostrar:\n", 15);
	scanf("%d", &A);
	
	for (i = 1; i < 15; i++){
	scanf("%d", &A);
	suma= suma+A;
	if (A>mayor){
		mayor=A;
	}
	}
	printf("este es el numero promedio: %d \n",suma/15);
	printf("este es el numero mayor: %d",mayor);
	return 0;
}





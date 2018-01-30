#include <stdio.h>
#include <stdlib.h>

void swap(int *vector, int a, int b){
	int aux;
	
	aux = vector[a];
	vector[a] = vector[b];
	vector[b] = aux;
}

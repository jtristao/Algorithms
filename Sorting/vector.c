#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vector.h"

int vector_shuffle(int *vector, int n){
	srand(time(NULL));
	if(vector == NULL)
		return 0;
	else{
		for(int i = 0; i < n; i++){
			*(vector + i) = rand() % n;
		}
	}
	
	return 1;
}

int vector_print(int *vector, int n){
	if(vector == NULL)
		return 0;
	else{
		for(int i = 0; i < n; i++)
			printf("%d\t", vector[i]);
		printf("\n");
	}

	return 1;
}

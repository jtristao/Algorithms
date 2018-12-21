#include "vector.h"

int *vector_create(int n){
	int *vector;

	vector = (int *)malloc(sizeof(int) * n);
	if(vector == NULL){
		printf("malloc failed\n");
		exit(0);
	}

	return vector;
}

int *vector_create_random(int n){
	int *vector = vector_create(n);

	srand(time(NULL));
	for(int i = 0; i < n; i++){
		vector[i] = (rand() % n) % INT_MAX;
	}

	return vector;
}

int *vector_create_sorted(int n){
	int *vector = vector_create(n);

	srand(time(NULL));
	for(int i = 0; i < n; i++){
		vector[i] = i;
	}

	return vector;	
}

int *vector_create_reversed(int n){
	int *vector = vector_create(n);

	for(int i = 0; i < n; i++){
		vector[i] = n-i;
	}

	return vector;
}

void vector_print(int *vector, int n){
	for(int i = 0; i < n; i++){
		printf("%4d \t", vector[i]);
	}
	printf("\n");
}

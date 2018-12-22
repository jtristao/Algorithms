#include <stdio.h>
#include <stdlib.h>

#include "vector.h"

enum{
	PROGNAME,
	N,
	ORDER,
	NARGS	
};

int swaps = 0;
int comp = 0;

void swap(int *vector, int i, int j){
	int aux = vector[i];
	vector[i] = vector[j];
	vector[j] = aux;
}

void bubble_sort(int *vector, int n){
	for(int i = 0; i < n-1; i++){
		for(int j = i; j <= n; j++){
			/* Compare function */
			if(vector[i] > vector[j]){
				swaps++;
				swap(vector, i, j);
			}
			comp++;
		}
	}
}

int main(int argc, char *argv[]){
	int *vector;
	int n, order;

	if(argc != NARGS){
		printf("usage %s: 'Number of elements' 'order'\n", argv[PROGNAME]);
		printf("Order:\n (0)random\n (1)increasingly\n (2)decreasingly\n");
		exit(0);
	}	

	n = atoi(argv[N]);
	order = atoi(argv[ORDER]);

	if(order == 0)
		vector = vector_create_random(n);
	else if(order == 1)
		vector = vector_create_sorted(n);
	else if(order == 2)
		vector = vector_create_reversed(n);
	else{
		printf("Invalid order option. Exiting program...\n");
		exit(0);
	}

	vector_print(vector, n);

	bubble_sort(vector, n);

	vector_print(vector, n);

	printf("Comp = %d\n", comp);
	printf("Swaps = %d\n", swaps);


	return EXIT_SUCCESS;
}

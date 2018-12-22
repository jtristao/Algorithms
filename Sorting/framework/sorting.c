#include "sorting.h"

void swap(int *vector, int i, int j){
	int aux = vector[i];
	vector[i] = vector[j];
	vector[j] = aux;
}

void bubble_sort(int *vector, int n){
	for(int i = 1; i < n; i++){
		for(int j = 0; j < n-i; j++){
			/* Compare function */
			if(vector[j] > vector[j+1])
				swap(vector, j, j+1);
		}
	}
}
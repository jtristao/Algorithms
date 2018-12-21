#include "bubble_sort.h"

void swap(int *vector, int i, int j){
	int aux = vector[i];
	vector[i] = vector[j];
	vector[j] = aux;
}

void bubble_sort(int *vector, int n){
	for(int i = 0; i < n-1; i++){
		for(int j = i; j <=n; j++)
			if(vector[i] > vector[j])
				swap(vector, i, j);
	}
}
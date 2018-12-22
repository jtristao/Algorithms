#include "bubble_sort.h"

void swap(int *vector, int i, int j){
	int aux = vector[i];
	vector[i] = vector[j];
	vector[j] = aux;
}

void bubble_sort(int *vector, int n){
	for(int i = 0; i < n-1; i++){
		for(int j = i; j <= n; j++){
			/* Compare function */
			if(vector[i] > vector[j])
				swap(vector, i, j);
		}
	}
}

/* Omega(n) Best case implementation
/*void bubble_sort(int *vector, int n){
	int new_n;

	while(n >= 1){
		new_n = 0;
		for(int i = 1; i <= n-1; i++){
			if(vector[i-1] > vector[i]){
				swap(vector, i-1, i);
				new_n = i;
			}
		}
		n = new_n;
	}
}
*/
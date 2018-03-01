#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bubble_sort.h"

void swap(void *a, void *b, size_t size){
	void *aux;

	aux = malloc(size);	
	memcpy(aux, a, size);
	memcpy(a, b, size);
	memcpy(b, aux, size);
	
	free(aux);
}

void bubble_sort(void *vector, size_t nmemb, size_t size, int(*compar)(const void *, const void *)){
	for(int j = 1; j < nmemb; j++)
		for(int i = 0; i < nmemb-j; i++)
			if(compar(vector+i*size, vector+(i+1)*size) > 0)
				swap(vector+i*size, vector+(i+1)*size, size);
}

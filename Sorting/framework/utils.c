#include <malloc.h>
#include <string.h>
#include "utils.h"

void swap(void *a, void *b, size_t size){
	void *aux;

	aux = malloc(size);	
	memcpy(aux, a, size);
	memcpy(a, b, size);
	memcpy(b, aux, size);
	
	free(aux);
}



#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

void bubble_sort(void *vector, size_t nmemb, size_t size, int(*compar)(const void *, const void *)){
	for(int j = 1; j < nmemb; j++)
		for(int i = 0; i < nmemb-j; i++)
			if(compar(vector+i*size, vector+(i+1)*size) > 0)
				swap(vector, i, i+1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "selection_sort.h"
#include "utils.h"

void selection_sort(void *base, size_t nmemb, size_t size, int(*compar)(const void *, const void *)){
	int min;
	
	for(int j = 0; j < nmemb; j++){
		min = j; 
		for(int i = j; i < nmemb; i++){
			if(compar(base+i*size, base+min*size) > 0){
				min = i;
			}
		}
		swap(base+j*size, base+min*size, sizeof(int));
	}

}


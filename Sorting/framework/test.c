#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"
#include "utils.h"
#include "vector.h"

enum{
	PROGNAME,
	N,
	NARGS,
};

int compar(const void *a, const void *b){
	int d = *(int *)a;
	int e = *(int *)b;

	return e-d;	
}

int main(int argc, char *argv[]){
	int n, *vector;

	if(argc != NARGS){
		printf("%s usage: size N of the vector\n", argv[PROGNAME]);
		exit(0);
	}
	
	n = atoi(argv[N]);
	vector = (int *)malloc(sizeof(int)*n);
	vector_shuffle(vector, n);
	vector_print(vector, n);
	bubble_sort(vector, n, sizeof(int), compar);
	vector_print(vector, n);

	free(vector);
}

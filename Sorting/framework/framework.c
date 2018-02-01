#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

#include "bubble_sort.h"

enum{
	PROGNAME,
	N,
	ARRAY_ORDER,
	ALGORITHM,
	NARGS,
};

int main(int argc, char *argv[]){
	int n, a_order, alg, *vector;
	
	if(argc != NARGS){
		printf("%s usage:\n\t size of vector;\n\t vector: (0)sorted, (1)reversed, (2)random;\n\t algorithm: (0)bubble_sort\n", argv[PROGNAME]);
		exit(0);
	} 

	n = atoi(argv[N]);
	a_order = atoi(argv[ARRAY_ORDER]);
	alg = atoi(argv[ALGORITHM]);
	
	vector = (int *)malloc(sizeof(int)*n);
	switch(a_order){
		case 0:
			vector_sorted(vector, n);
			break;
		case 1:
			vector_reversed(vector, n);
			break;
		case 2:
			vector_random(vector, n);
			break;
		default:
			printf("Invalid array order");
			exit(0);
	}
	
	switch(alg){
		case 0:
			bubble_sort(vector, n);
			break;
		deafult:
			printf("Invalid Algorithm");
			exit(0);
	}	
		
	vector_print(vector, n);

	return EXIT_SUCCESS;
}

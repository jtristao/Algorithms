#include <stdio.h>
#include <stdlib.h>

#include "vector.h"
#include "bubble_sort.h"

enum{
	PROGNAME,
	N,
	NARGS	
};

int main(int argc, char *argv[]){
	int n;

	if(argc != NARGS){
		printf("usage %s: N\n", argv[PROGNAME]);
		exit(0);
	}	

	n = atoi(argv[N]);

	int *vector = vector_create_random(n);
	vector_print(vector, n);

	bubble_sort(vector, n);

	vector_print(vector, n);



	return EXIT_SUCCESS;
}

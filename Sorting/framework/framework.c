#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "vector.h"
#include "sorting.h"

		// Prepare um vetor de acordo com o algoritmo selecionado
		// Escolha o algoritmo
			// Marque o tempo inicial
			// Ordene
			// Marque o tempo final
		// Imprima

enum{
	PROGNAME,
	ALGORITHM,
	MAXN,
	ORDER,
	NARGS	
};

int main(int argc, char *argv[]){
	int *array;
	int max_n, algorithm, order;

	if(argc != NARGS){
		printf("usage %s: 'algorithm' 'Number of elements' 'order'\n", argv[PROGNAME]);
		printf("Algorithms: \n (1) bubble_sort\n");
		printf("Order: \n (1) random \n (2) sorted \n (3) reversed \n");
		exit(0);
	}

	algorithm = atoi(argv[ALGORITHM]); 
	max_n = atoi(argv[MAXN]);
	order = atoi(argv[ORDER]);


	for(int i = 1000; i <= max_n; i+=1000){

		switch(order){
			case 1:
				array = vector_create_random(i);			
				break;
			case 2:
				array = vector_create_sorted(i);			
				break;
			case 3:
				array = vector_create_reversed(i);			
				break;
			default:
				printf("Invalid option. Exiting program...\n");
				exit(0);
				break;
		}

		clock_t begin = clock();
		switch(algorithm){
			case 1:
				bubble_sort(array, i);
				break;
			default:
				printf("Invalid option. Exiting program...\n");
				exit(0);
				break;			
		}
		clock_t end = clock();
		printf("%d %lf\n", i, (double)(end - begin)/CLOCKS_PER_SEC);

	}

	return EXIT_SUCCESS;
}

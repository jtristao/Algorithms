#include <stdio.h>
#include <stdlib.h>
#include "selection_sort.h"

enum{
	PROGNAME,
	N,
	NARGS,
};

typedef struct {
	unsigned age;
	unsigned code;
}PERSON;

int compar(const void *a, const void *b){
	int d =((PERSON *)a)->age;
	int e =((PERSON *)b)->age;

	return e-d;	
}

int main(int argc, char *argv[]){
	PERSON *data;
	int n;

	if(argc != NARGS){
		printf("%s usage: size N of the vector\n", argv[PROGNAME]);
		exit(0);
	}
	
	n = atoi(argv[N]);
	data = (PERSON *)malloc(sizeof(PERSON) * n);

	for(int i = 0; i < n; i++){
		data[i].code = i;		
		data[i].age = rand() % n;
	}
	
	for(int i = 0; i < n; i++){
		printf("%d \t%d\n", data[i].code, data[i].age);
	}

	printf("----------------------------------------------------\n");	
	selection_sort(data, n, sizeof(PERSON), compar);

	for(int i = 0; i < n; i++)
		printf("%d \t%d\n", data[i].code, data[i].age);
}

#ifndef _VECTOR_H_
#define _VECTOR_H_

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

/* Allocates a dynammic vector of N integers*/
int *vector_create(int n);

/* Creates a dynammic vector with N random integers
	Values range from 0 to N */
int *vector_create_random(int n);

/* Creates a dynammic vector with N sorted integers 
	Values range from 0 to N */
int *vector_create_sorted(int n);

/* Creates a dynammic vector with n sorted backwards integers
	Values range from 0 to N */
int *vector_create_reversed(int n);

/* Prints a vector of n elemts */
void vector_print(int *vector, int n);

#endif
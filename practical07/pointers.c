#include <stdio.h>
#include <stdlib.h>

// Function prototypes
int *allocatearray(int n);
void fillwithones(int *p, int n);
void printarray(int *p, int n);
void freepointer(int *p);

// Calling on all functions
int main(void)
{
	int size = 5;
	int *array;
	array = allocatearray(size);
	fillwithones(array, size);
	printarray(array, size);
	freepointer(array);
	return 0;
}
// Retrieves memory address for array of specified size
int *allocatearray(int n)
{
	return ((int *)malloc(n * sizeof(int)));
}

// Fills array with ones
void fillwithones(int *p, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
	p[i] = 1;
	}
}

// Prints array
void printarray(int *p, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
	printf(" %d ", p[i]);
	}
	printf("\n");
}

// Frees pointers
void freepointer(int *p)
{
	free(p);
}




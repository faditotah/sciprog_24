#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// Function prototype
int factorial(int x);

int main(void)
{
	// Variable Declaration
	int order, i;
	double *terms, e;

	// User input
	printf("Please enter the order you wish to use\n");
	scanf("%d", &order);

	//printf("5! is %d\n", factorial(5));
	// Dynamic memory allocation
	terms = (double *)malloc(order*sizeof(double));

	// Calculating each polynomial term
	for (i = 0; i < order; i++)
	{
        terms[i] = 1.0 / (double)factorial(i+1);
        //printf("(e term for order %d is %1.14lf )\n", order, terms[i]);
	}

	e = 1.0;
	// Estimating e and difference from real value
	for (i = 0; i < order; i++)
	{
        e = e + terms[i];
	}

	printf(" e is estimated as %.10lf, with difference %e\n", e, e - exp(1.0));


	free(terms);
	return 0;
}
// Factorial function, with input checks
int factorial(int x)
{
	if (x<0){
	printf("You must use a positive number\n");
	return(-1);
	}
	else if (x == 0)
	{
	return 1;
	}
	else
	{
	return (x * factorial(x-1));
	}
}

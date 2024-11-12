/*
Iterative and recursive versions of Euclid's algirithm
to calculate the gcd of two positive integers
*/

#include <stdio.h>

// Iterative Function takes two inputs
int iterativeGCD(int a, int b){
	int temp; // Variable declaration
	while (b != 0){ // While loop to find GCD using Euclid algorithm
		temp = b;
		b = a%b;
		a = temp;
	}
	return a; // Returns GCD once b is 0
}

// Recursive GCD Function 
int recursiveGCD(int a, int b){ // Takes two int inputs
	if (b == 0){ // If b input is 0, a is returned
		return a;
	}
	else {
	return (recursiveGCD(b, a%b)); // Else, the function is called again using b and the remainder when a is divided by b
	}
}

// Main function
int main(){
	int a, b, error; // Variable declaration

	// ask user for two int inputs
	printf("Please enter two positive integers:\n");
	error = scanf("%d %d", &a, &b);
	// Check to make sure two values are input
	if (error != 2){
	printf("Please enter two integers!\n");
	return 1;
	}
	// Check to ensure values are positive
	if (a <= 0 || b <= 0){
	printf("Please enter positive integers!\n");
	return 1;
	}
	// Call on both functions to return GCD using both approaches
	printf("IterativeGCD(%d, %d)=%d\n", a, b, iterativeGCD(a, b));
	printf("RecursiveGCD(%d, %d)=%d\n", a, b, recursiveGCD(a, b));

	return 0;
}


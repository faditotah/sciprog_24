# Practical07

## Estimating e (e.c)
- In this file, the user inputs the order of the polynomial. The values of the polynomial are stored dynamically into an array, type double. 
- The estimate is calculated from the polynomial and compared to the true value of e
- Compile: gcc - o e e.c -lm 
- Run: ./e
- Example output: 

./e
Please enter the order you wish to use
5
5! is 120
 e is estimated as 2.7166666667, with difference -1.615162e-03

## Pointers (pointers.c)
- This aim of this exercise is to understand the concept of pointers and memory allocation
- The first function returns the requested memory address for an integer array of a specified size
- That array is then filled with ones using fillwithones()
- The array is then printed with printarray()
- The memory is then freed with freepointer()
- Compile: gcc -o pointers pointers.c
- Run: ./pointers
- Example output: 
./pointers
 1  1  1  1  1 

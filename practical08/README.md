# Practical 08: GCD

- The code in this practical calculates the Greatest Common Divisor (GCD) of a pair of integers passed as inputs
- The Euclidian Algorithm was used to generate the GCD using iterative and recursive approaches
- There is an iterative and recursive function in the main program
- The iterative function loops through itself until the GCD is found with remainder 0
- The recursive function repeatedly calls on itself until the GCD is found
- Compile: gcc -o gcd gcd.c
- Run: ./gcd
- Example output: 

Please enter two positive integers:
100 23
IterativeGCD(100, 23)=1
RecursiveGCD(100, 23)=1

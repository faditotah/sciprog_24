## Practical 06 
### This code in this practical computes the product for multiplying two matrices. 

### matmult.c File
- The code in this file contains the function for multiplying the matrices, in addition to the written output
- The file is compiled with: gcc -o matmult matmult.c
- The file is then run with: ./matmult
- Output:
 This is matrix A

  0  1  2
  1  2  3
  2  3  4
  3  4  5
  4  5  6

 This is matrix B

  0 -1 -2 -3
  1  0 -1 -2
  2  1  0 -1

 This is matrix C

  5  2 -1 -4
  8  2 -4-10
 11  2 -7-16
 14  2-10-22
 17  2-13-28

### step6 directory
- The code in this directory contains two files: mm.c and main.c
- mm.c contains the function for matrix multiplication and takes in the matrices and sizes as inputs
- main.c generates the matrices, calls on the function in mm.c, and outputs the product
- Makefile will compile both files and generate the executable: make all
- ./matmult
- Output: 
 This is matrix A

  0  1  2
  1  2  3
  2  3  4
  3  4  5
  4  5  6

 This is matrix B

  0 -1 -2 -3
  1  0 -1 -2
  2  1  0 -1

 This is matrix C

  5  2 -1 -4
  8  2 -4-10
 11  2 -7-16
 14  2-10-22
 17  2-13-28 
 

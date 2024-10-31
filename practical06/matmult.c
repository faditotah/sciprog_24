#include <stdio.h>
#include <math.h>

// Function prototype for matmult
//void matmult(int n, int p, int q, double a[n][p], double b[p][q], double c[n][q]);
int main(){
	int n = 5, p = 3, q = 4;
	double a[n][p], b[p][q], c[n][q];
	int i, j, k; // Loop indices

	// Initialize A, B, C
	for (i = 0; i < n; i++)
	{
	for (j = 0; j < p; j++)
		{
		a[i][j] = i+j;
		}
	} 
        for (i = 0; i < p; i++) 
        { 
        for (j = 0; j < q; j++)
                {
                b[i][j] = i-j;
                }
        } 
        for (i = 0; i < n; i++) 
        { 
        for (j = 0; j < q; j++)
                {
                c[i][j] = 0.0;
                }
        } 

	// Perform matrix multiplication
        for (i = 0; i < n; i++) 
   		for (j = 0; j < q; j++)
			for (k=0; k<p; k++)
				c[i][j] = c[i][j] + a[i][k]*b[k][j];


// matmult(n,p, q, a, b, c);
	// Print out matrices
	printf("\n This is matrix A\n\n");
	for (i = 0; i < n; i++){
        	for (j = 0; j < p; j++){
			printf("%3.0f", a[i][j]);
		}
		printf("\n");
		}

	printf("\n This is matrix B\n\n");
        for (i = 0; i < p; i++){
                for (j = 0; j < q; j++){
                        printf("%3.0f", b[i][j]);
                }
                printf("\n");
                }
        printf("\n This is matrix C\n\n");
        for (i = 0; i < n; i++){
                for (j = 0; j < q; j++){
                        printf("%3.0f", c[i][j]);
                }
                printf("\n");
                }
	return 0;
}
	

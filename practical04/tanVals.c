#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void){
	int i; //declare loop variable
	float tan_vals[12]; // declare array for storing tan values

	for (i=0; i<12; ++i){ // for loop to calculate 12 tan values b/w 0 and 60 degrees, every 5 degrees
		tan_vals[i] = tan((M_PI * i * 5)/180);
	}
	
	for (i = 0; i < 12; ++i) {// printing the values in the array
        	printf("tan(%d) = %f\n", i, tan_vals[i]);
    	}
	
	float area(int n) // function to calculate the area under the tan(x) curve between [0,60] using n points
	{
        	float a = 0; // starting value
        	float b = 60; //ending value

        	float b_rad; // converting 60 degrees to radians
        	b_rad = (M_PI * b)/180;

        	float sum = tan(a) + tan(b_rad); // applying trapezoidal rule
        	int i = 0; // for-loop to generate n points and obtain 2*f(x) value
        	for (i=5; i< 60; i = i + 5)
        	{
			sum += 2 * tan(i * M_PI / 180);
        	}
        
        	sum = ((b_rad - a) / (2 * n)) * sum; // calculating final sum (area) 
		return sum; // function returns sum
	}
	printf("%f\n", area(12));
	return 0;
}

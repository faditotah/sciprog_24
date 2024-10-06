

#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void) {

int n = 12;
double a = 0.0;
double b = M_PI/3.0;
double h = (b-a)/(n-1);
double sum0 = tan(a) + tan(b);

int i;

for (i = 1; i < n-1; ++i) {
	double xi = a + (i*h);
	sum0 = sum0 +  2*tan(xi);
}
sum0 = (sum0)*((b-a)/(2*n));
double lg = log(2.0);
printf("The trapezoidal area  is %f\n",sum0);
printf("Log 2 is %f\n",lg);

return 0;

}

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{

	double x[] = {11,10,1,66,99,45,27,39,81,5};

	double y = 0;
	double z = 0;

	int i=0;
	while (i<10){
		y=y+x[i];
		i++;
	}
	y=y/i;
	printf("\nMean of the array = %f", y);

	i=0;
	while (i<10){
		z=z+pow(y-x[i],2);
		i++;
	}
	z=z/(i-1);
	printf("\nVariance the array = %f", z);
	z=pow(z,0.5);
	printf("\nStandard Deviation of the array = %f", z);

	return 0;
}
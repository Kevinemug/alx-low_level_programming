#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/** This program will assign a random number to a variable n each time it is executed.
 *
 */

int main(void)
{
	int n;
	srand(time(0));
	n=rand()-RAND_MAX/2;
	
	if(n>0)
		printf("%d is positive \n",n);
	else if(n<0)
		printf("%d is negative \n",n);
	else
		printf("%d is zero \n",n);
	return (0);

}	



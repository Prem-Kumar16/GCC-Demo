#include<stdio.h>

int main()
{
	long int i, prime, lim_up, lim_low, n;

	printf("\n\nEnter the lower limit : ");
	scanf("%d", &lim_low);
	printf("\n\nEnter the upper limit : ");
	scanf("%d", &lim_up);
	printf("\n\nPRIME NUMBERS ARE---------: ");

	for(n=lim_low+1; n<lim_up; n++)
	{
		prime = 1;

		for(i=2; i<n; i++)
		if(n%i == 0)
		{
			prime = 0;
			break;
		}
		if(prime)
		printf("%d, ", n);
	}	
	return 0;
}

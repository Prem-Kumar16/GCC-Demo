#include<stdio.h>
#include<math.h>

int main()
{
	long int num, rev = 0, dig;

	printf("\n\nEnter a number : "); 
	scanf("%ld", &num);

	while(num>0)
	{
		dig = num % 10;
		rev = rev * 10 + dig;
		num = num / 10;
	}

	printf("\nReversed number is : %ld", rev );

	return 0;
}

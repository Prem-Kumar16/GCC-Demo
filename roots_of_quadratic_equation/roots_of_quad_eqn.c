#include<stdio.h>
#include<math.h>

int main()
{
    int A, B, C;
    float disc, deno, x1, x2;

    printf("ENTER THE VALUE OF A : ");
    scanf("%d", &A);
    printf("\nENTER THE VALUE OF B : ");
    scanf("%d",&B);
    printf("\nENTER THE VALUE OF C : ");
    scanf("%d",&C);

    disc=(B*B)-(4*A*C);
    deno = 2 * A;

    if(disc > 0)
    {
    	printf("\nTHE ROOTS ARE REAL ROOTS.");
	double d1 = sqrt disc;
    	x1 = (-B/deno)+(d1/deno);
    	x2 = (-B/deno)-(d1/deno);
    	printf("\n\nTHE ROOTS ARE : %f and %f\n", x1, x2);
    }

    else if(disc == 0)
    {
    	printf("\nTHE ROOTS ARE REPEATED ROOTS.");
    	x1 = -B/deno;
    	printf("\n\nTHE ROOT IS : %f\n", x1);
    }

    else
    	printf("\nTHE ROOTS ARE IMAGINARY ROOTS.\n");

    return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    int iVar;
    float fVar;

    printf("\nEnter any number : ");
    scanf("%d",&num);

    fVar=sqrt((double)num);
    iVar=fVar;

    if(iVar==fVar)
        printf("\nThe Entered Number %d is a Perfect Square.\n",num);
    else
        printf("\nThe Entered Number %d is not a Perfect Square.\n",num);

    return 0;
}

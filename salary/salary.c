#include <stdio.h>
 
int main()
{
  
    float basic, hra, da, pf, gross;
 
    printf("Enter Basic Salary: ");
    scanf("%f",&basic);
    printf("Enter HRA: ");
    scanf("%f",&hra);
    printf("Enter D.A.: ");
    scanf("%f",&da);
     
    /*pf automatic calculated 12%*/
    pf= (basic*12)/100;
 
    gross=basic+da+hra+pf;
 
    printf("\nBASIC: %f \nHRA: %f \nDA: %f \nPF: %f \n***GROSS SALARY: %f ***",basic,hra,da,pf,gross);
     
    return 0;
}

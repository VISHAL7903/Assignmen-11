#include<stdio.h>
void between_two_prime(int a, int b)
{
    int i,j;
   for(i=a;i<=b;i++)
    { 
    for (j=2;j<=i;j++)
    {
        if(i%j==0)
        break;
    }       
    if(i==j)
    printf("\n%d is a prime number",j);
    }
}
void between_two_prime(int a, int b);
int main()
{
    int a,b;
    printf("Enter the number");
    scanf("%d%d",&a,&b);
    between_two_prime(a,b);
    return 0;
}
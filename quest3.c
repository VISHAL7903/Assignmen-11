#include<stdio.h> 
int prime(int num)
{
        int i;
        for(i=2;i<=num-1;i++)
        { 
            if(num%i==0)
            return 0;
        } 
            return 1;
}
        int main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    if(prime(num))
    {
    printf("Prime number");
    }
    else
    {
    printf("Not Prime number");
    }
    return 0;
}
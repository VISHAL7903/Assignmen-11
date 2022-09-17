#include<stdio.h>
int next_prime(int n)
{
    int i,j;
    for(i=n+1; 1 ;i++)
    {
        for(j =2; j<=i;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j>=i)
        return i;
    }
}
int main()
{
     int n;

    printf("Enter a number");
    scanf("%d",&n);
    printf("Next Prime number is %d ",next_prime(n));
    return 0;
}
#include<stdio.h>
void first_n_prime(int n)
{
    int i,j;
    for(i=1;n>0;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {   
                break; 
            }
        }
        if(j>=i)
        {
            printf("%d ",i);
            n--;
        }
    }
} 
void first_n_prime(int n);
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    first_n_prime(n);
    return 0;
}

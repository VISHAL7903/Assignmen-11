#include<stdio.h>
int lcm(int a, int b)
{
    int i;
    for(i=1;i<=a*b;i++)
    {
        if((i%a==0)&&(i%b==0))
        {
        break;  
        }
    }
    return i;
}
int main()
{
    int a,b,k;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    k=lcm(a,b);
    printf("LCM is %d",k);
    return 0;
}
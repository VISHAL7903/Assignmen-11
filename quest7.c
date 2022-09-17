#include<stdio.h>
void fibonacci_series(int m)
{
    int i=1,a=0,b=1,j=3;
    for(i=1;i<=m;i++)
    while(i<=m)
    {
        j=a+b;
        a=b;                     
        b=j;
        printf("%d ",j);
        i++;
    }
}
void fibonacci_series(int );
int  main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    fibonacci_series(n);
    return 0;
}
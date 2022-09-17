  #include<stdio.h>
  int hcf(int a, int b)
  {
    int i,hcf=1;
    int min=a<b?a:b;
    for(i=1;i<=min;i++)
    {
        if((a%i==0)&&(b%i==0))
        hcf=i;
    }
    return hcf;
  }
  int main()
  {
    int a,b,k;
    printf("Enter the two number");
    scanf("%d%d",&a,&b);
    k=hcf(a,b);
    printf("HCF is %d ",k);
    return 0;
  }
#include<stdio.h>
int fibonacci(int n)
{
    //code to calculate n-th fibonacci number:
    int a=0,b=1,c;
    for(int i=1;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
int main()
{
    int n;
    printf("Enter n to find n-th number:");
    scanf("%d",&n);
    int ans=fibonacci(n);
    printf("%d",ans);
    return 0;
}
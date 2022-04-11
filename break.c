#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
        printf("\nThe smallest divisor is:%d\n",i);
        break;
        }
    }
return 0;
}
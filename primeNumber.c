#include<stdio.h>
#include<stdbool.h>
bool prime(int  n){
    if(n==1)
    return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }
     return true;
}
int main()
{
    int n;
    printf("Enter the number to check if it is prime or not: ");
    scanf("%d",&n);
    printf("%d",prime(n));
return 0;
}

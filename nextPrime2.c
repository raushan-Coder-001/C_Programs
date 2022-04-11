#include<stdio.h>
int nextPrime( int n)
{
    while(1)
    {
        int i;
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            break;
        }
        if(i==n)
        return n;
        n++;
    }
}
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("Next Prime number is: %d",nextPrime(n+1));
    return 0;
}
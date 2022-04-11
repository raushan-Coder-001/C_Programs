#include<stdio.h>
int firstDigit(int x)
{
    while(x>10)
    {
         x=x/10;
    }
    return x;
}
int main()
{
    int x;
    printf("Enter the number:\n");
    scanf("%d",&x);
    int dig=firstDigit(x);
    printf("%d",dig);
    return 0;
}
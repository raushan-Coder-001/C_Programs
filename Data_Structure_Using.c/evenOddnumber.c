#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number to check if it is even or odd \n");
    scanf("%d",&a);
    if(a&1==0)
    {
        printf("Number is even ");

    }
    else {
        printf("Number is odd");

    }
    return 0;
}
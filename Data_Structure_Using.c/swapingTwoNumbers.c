#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a and b for swaping them\n");
    scanf("%d%d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("\nThe new value of a and b is %d   %d",a,b);
    return 0;
}
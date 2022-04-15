#include <stdio.h>

int main()
{
    int a,b;
    
    printf("Enter both values for swap:");
    scanf("%d%d",&a,&b);
    
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    
    printf("\nNew values of a and b is : %d %d",a,b);
    return 0;    
}
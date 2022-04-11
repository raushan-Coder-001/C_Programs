#include<stdio.h>
void inverseRightTriangle(int n){
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    inverseRightTriangle(n);
    return 0;
}
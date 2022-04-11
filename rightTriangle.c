#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n;col++)
        {
            if(col<=row)
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}
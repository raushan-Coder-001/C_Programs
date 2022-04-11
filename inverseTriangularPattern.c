#include<stdio.h>
int main()
{
    int n;
    printf("Enter a  number: \n");
    scanf("%d",&n);
    for(int row=1;row<=n;row++)
    {
        for (int coul=1;coul<=n;coul++)
        {
            if(row<=coul)
            {
                printf("* ");
            }
        }printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    for(int x=1;x<=n;x++)
    {
        for(int i=1;i<=10;i++)
        {
            printf("%d ",x*i);
        }
            printf("\n");
        

    }
    return 0;
}
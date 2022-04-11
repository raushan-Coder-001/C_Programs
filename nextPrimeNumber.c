#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter a number to find next prime:");
    scanf("%d",&n);
    for(int i=n+1;i>0;i++)
    {
        int count=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            count++;
        }
        if(count==2){
            printf("%d",i);
            break;
        }
    }
}
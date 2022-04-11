#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number to print hollow square pattern:");
    scanf("%d",&n);
    hollowuare(n);
    return 0;
    }
    void hollowSquare(n){
        int i,j;
        for(int i=1;i<=n;i++){
for(int j=1;j<=n;j++)
        {
            if(i==1||i==n||j==1||j==n)
            
                printf("* ");
            
            else 
                printf("  ");
            
        }
        printf("\n");
        }
    }

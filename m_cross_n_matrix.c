#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the dimentions of the matrix m*n:   \n");
    scanf("%d%d",&m,&n);
    int arr[m][n];
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    arr[i][j]=(i+j);
    for(int i=0;i<m;i++)
    {
    for(int j=0;j<n;j++)
     {
         printf("%d  ",arr[i][j]);
     }
         printf("\n");

    }
   return 0;

}
#include<stdio.h>
int main()
{
    int mat[3][2] = {{10,20},{30,40},{119,60}};
    for (int i=0;i<3;i++)
    {
    for(int j=0;j<2;j++)
     {
    printf("%d ",mat[i][j]);
   
     }

    }
    return 0;
}
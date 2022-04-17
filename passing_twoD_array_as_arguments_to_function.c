#include<stdio.h>
void print(int m,int n, int mat[][n])
{
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    printf("%d ",mat[i][j]);
}
int main()
{
    int mat[3][2]={{10,20},{30,40},{50,60}};
    print(3,2,mat);
    return 0;
}
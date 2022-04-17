#include<stdio.h>
#define M 3
#define N 4
void transpose (int A[][N],int B[][M])
{
    int i,j;
    for(int i=0;i<N;i++)
    for(int j=0;j<M;j++)
    B[i][j]=A[j][i];
}

int main()
{
    int A[M][N];
    printf("Enter elements of 3*4 matrix:\n");
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
        scanf("%d",&A[i][j]);
    }
    int B[N][M],i,j;
    transpose(A,B);
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        printf("%d ",B[i][j]);
        printf("\n");
    }
    return 0;
}
//print numbers from 1 to n that are not allowed multiple of x
#include<stdio.h>
int main()
{
    int n,x;
    printf("Enter n and x:");
    scanf("%d %d",&n,&x);
for(int i=1;i<=n;i++)
{
    if(i%x==0)
        continue;
        printf("\n%d ",i);
}
return 0;
}
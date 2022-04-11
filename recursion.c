#include<stdio.h>
void fun(int x)
{
    if (x==0)
    return;
    else
    {
        printf("%d ",x);
        fun(x-1);
    }
}
int main()
{
    int n;
    printf("Enter the number to print recursion:\n");
    scanf("%d",&n);
    fun(n);
    return 0;
}
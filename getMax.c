#include<stdio.h>
int getMax (int a, int b)
{
    if (a>b)
    return a;
    else 
    return b;
}
int  main()
{
    int a,b;
    scanf ("%d %d",&a,&b);
    printf("%d",getMax(a,b));
    return 0;
}
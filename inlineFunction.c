#include<stdio.h>
inline int getMax(int x, int y)
{
    (x>y)? x:y;
}
int main()
{
    printf("%d",getMax(10,20));      //output should be 20 but  it shows error why?
    return 0;
}
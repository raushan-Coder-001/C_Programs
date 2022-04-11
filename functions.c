#include<stdio.h>
void fun()
{
    printf("fun() called \n");
}
int main()
{
    printf("Brfore calling fun()\n");

fun();
printf("After calling fun()");
return 0;
}
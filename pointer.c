#include<stdio.h>
int main()
{
    int num=10;
    int num1=10;
    int num2=10;
    int *ptr=&num;
    int *ptr1=&num1;
    int *ptr2=&num2;
    printf("values of num,num1,num2 is: %d %d %d\n",*&num,*&num1,*&num2);
    printf("addreses of num,num1,num2 are :%p %p %p",&num,&num1,&num2);
    return 0;
}
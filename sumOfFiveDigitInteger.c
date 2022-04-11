#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
 int n,last_num,sum=0,temp;
 printf("Enter a number: ");
 scanf("%d",&n);
 temp=n;
 while(temp >0)
 {
     last_num = temp%10;
     sum=sum+last_num;
     temp=temp/10;
 }
 printf("%d",sum);
 return 0;
}
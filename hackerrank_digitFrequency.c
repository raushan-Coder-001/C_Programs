#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//To print the frequency of digits repeated in string we entered.
int main()
{
   char *num;
   num = malloc(1024 * sizeof(char));
   scanf("%s",num);
   num = realloc(num, strlen(num) + 1);
   int len = strlen(num) ,i;
   int arr[10];
   for(int i=0;i<10;i++)
   
       arr[i] = 0;
       for(int i=0;i<len;i++)
       {
           if(num[i] >= '0' && num[i] <= '9')
           {
               arr[(int)(num[i] - '0')]++;
           }
       }
       for(i = 0;i<10;i++)
       
           printf("%d ",arr[i]);
           printf("\n");
           free(num);
           return 0;
       
   
}
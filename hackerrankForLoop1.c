#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
    printf("Enter a and b: ");
    int a,b;
    char *arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d %d",&a,&b);
    for(int i =a;i<=b;i++)
    {
        if(i<=9)
        {
          printf("%s\n",arr[i]);
        }
        else if(i%2==0)
        {
            printf("Even\n");
        }
        else 
        printf("Odd\n");
    }
    return 0;
}
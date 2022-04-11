/*we have to write a code to see the numbers in between the given limits 
[a,b] if the numbers are greater than 9 then print they are odd or even 
if they are less than 9 then print english alphabatic name of them like 1= one , 2 = two */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
    printf("Enter a and b:");
    int a, b;
    scanf("%d %d",&a,&b);
    char *count[9]={"one","two","three","four","five","six","seven","eight","nine"};
        while(b>a)
        {
           for(int i=a-1;i<b;i++)
           if(a<10&&b<10)   
           puts(count[i]);
           break;
        }
        while(b>a)
        {
            for(int i=a;i<=b;i++)
            if(a>9&&b>9)
            {
                int *ans=&a;
                if(i%2==0)
                {
                    printf("Even\n");
                }
                else printf("Odd\n");
            }
            break;
        }
        while(a<10&&b>9)
        {
            for(int i=a-1;i<10;i++)
           {
               if(a<10&&b<10)   
           puts(count[i]);
           break;
            }
            for(int i=10;i<=b;i++)
            {
           int *ans=&a;
                if(i%2==0)
                {
                    printf("Even\n");
                }
                else printf("Odd\n");
            }break;    
        }
         while(b>a)
        {
           for(int i=a-1;i<b;i++)
           if(a<10)   
           puts(count[i]);
           break;
        }

}
/* I have doen it but it first print even odd then alpahabatic numbring*/
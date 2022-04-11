#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int length = 20,width = 100,i,j;
void draw()
{
    for(i=0;i<length;i++)
    {
        for(j=0;j<width;j++)

        {
            if(i==0||i==length -1)
            {
                printf("=");
            }

            else if(j==0||j==width-1)
            {
                printf("|");
            }

            else {
                printf(" ");
            }
        }

        printf("\n");
        
    }
}

int main()
{
    draw();
    return 0;
}
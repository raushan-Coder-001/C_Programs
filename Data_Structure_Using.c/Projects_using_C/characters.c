#include<stdio.h>
int main()
{
    char c;
    for(int i=0;i<256;i++)
    {
        printf("%d ) \"%c\"\n\n",i,i);
    }
    scanf("%c",&c);
    return 0;
}
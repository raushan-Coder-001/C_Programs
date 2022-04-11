#include<stdio.h>
int main()
{
    char str[7];
    strncpy (str,"RaushanCode",7);
    str[7]='\0';
    printf ("%s",str);
    return 0;
}
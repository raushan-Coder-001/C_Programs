#include<stdio.h>
#include<string.h>
int main()
{
    char s1[119],s2[119];
    printf("Enter both strings:\n");
    fgets(s1,119,stdin);
    fgets(s2,119,stdin);
    if (strncmp(s1,s2,strlen(s2))==0)
    printf("String s2 is prefix of s1");
    else
    printf("String s2 is not the prefix of s1");
    return 0;
}
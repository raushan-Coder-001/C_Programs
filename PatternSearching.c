#include<stdio.h>
#include<string.h>
void search(char* p, char* s)
{
    int M=strlen(p);
    int N=strlen(s);
    for(int i=0;i<=N-M;i++)
    {
        int j;
        int a=i;
        for(j=0;j<M;j++)
        {
            if (s[a] != p[j])
            break;
            a++;
        }
        if (j==M)
        printf("Pattern found at index %d\n",i);
    }
}
int main()
    {
        char s[]="ABCCABC";
        char p[]="ABC";
        search(p,s);
        return 0;
    }
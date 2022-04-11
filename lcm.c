#include<stdio.h>
int lcm(int a,int b){
    //code for lcm of a and b
    int m;
    if(a>b)
    {
        m=a;
    }
    else m=b;
    for(m;m<=(a*b);m++)
    {
        if((m%a==0)&&(m%b==0))
        {
            return m;
            break;
        }
    }
}
int main()
{
    int a,b;
printf("Enter a and b number:");
scanf("%d %d",&a,&b);
int ans=lcm(a,b);
printf("LCM is :%d",ans);
return 0;
}
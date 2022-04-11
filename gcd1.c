#include<stdio.h>
int gcd(int a, int b){
    //code here to calculate and return gcd of a and b
    int n;
    if(a<b)
    n=a;
    else
    n=b;
    for(n;n!=0;n--)
    {
        if((a%n==0)&&(b%n==0))
        {
            return n;
            break;
        }
    }
}
int main()
{
    int a,b;
    printf("Enter a and b number :");
    scanf("%d %d",&a,&b);
    int ans=gcd(a,b);
    printf("%d\n",ans);
    return 0;

}
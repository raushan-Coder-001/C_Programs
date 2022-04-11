#include<stdio.h>
int gcd(int a, int b){
    //code here to calculate and return gcd of a and b
    if(a==0)
    return b;
    return gcd (b%a,a);
}
int main()
{
    int a,b;
    printf("Enter a and b:");
    scanf("%d %d",&a,&b);
    int ans = gcd(a,b);
    printf("%d\n",ans);
    return 0;
}
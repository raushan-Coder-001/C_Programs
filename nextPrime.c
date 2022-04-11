#include<stdio.h>
int nextPrime(int n){
    n++;
    while(1){
        int i;
        for(i=2;i<n;i++){
            if(n%i==0)
            break;
        }
        if( i==n)
        return n;
        n++;
    }
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int ans= nextPrime(n);
    printf("%d\n",ans);
    return 0;
}
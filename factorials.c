#include<stdio.h>
long long int factorial(int N)
{
    //Answer should be stored in long long as it may overflow the int
    long long int ans=1; 
    for(int i=2;i<=N;i++)
    {
        //Calculating the factorial
        ans=ans*(long long)(i); 
    }
    return ans;
}
int main()
    {
        int N;
        scanf("%d",&N);
        printf("%lld\n",factorial(N));
    
    return 0;
    }

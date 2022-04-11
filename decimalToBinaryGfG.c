#include<stdio.h>
void toBinary(int N)
{
    int binaryNum[1000];
    int B=N;
    int i=0;
    if(B==0){
        printf("0");
        return ;
    }
    while(B>0){
        //storing remainder in binary array
        binaryNum[i]=B%2;
        B=B/2;
        i++;
    }
 for(int j=i-1;j>=0;j--)
 printf("%d",binaryNum[j]);   
}
int main()
{
    int n;
    printf("Enter a number to get binary number:");
    scanf("%d",&n);
    toBinary(n);
    printf("\n");
    return 0;
}
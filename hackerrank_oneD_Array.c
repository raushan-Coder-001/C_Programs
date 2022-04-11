#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
//to add the elements of an array and then free the array 
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int *ans = malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ans[i]);
        sum += ans[i];
    }
    printf("%i",sum);
    free(ans);
    return 0;
}
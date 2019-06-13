#include<stdio.h>
int main()
{
    int num,k,i,sum=0;
    scanf("%d %d",&num,&k);
    int arr[num];
    for(i=0;i<num;i++)
    {
     scanf("%d",&arr[i]);   
    }
    for(i=0;i<k;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
    
}
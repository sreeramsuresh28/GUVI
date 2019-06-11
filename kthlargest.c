#include<stdio.h>
int main()
{
    int n,k,t;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                t = arr[i];
                arr[i]=arr[j];
                arr[j]=t;

            }
        }
    }
    printf("%d",arr[k-1]);
}

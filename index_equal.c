#include<stdio.h>
int main()
{
    int n,i, found = 0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(i==arr[i]) {
            printf("%d ",arr[i]);
            found = 1;
        }
    }

    if(!found)  printf("-1");
    return 0;
}
#include<stdio.h>
int main()
{
    int n,prod=1,i;
 
    scanf("%d",&n);
    int arr[n];
   for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
    prod=prod*arr[i];
}

printf("%d",abs(prod));


return 0;
}

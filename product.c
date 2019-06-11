
#include<stdio.h>
int main()
{
   long long int n,prod=1,i;
 
    scanf("%lld",&n);
    int arr[n];
   for(i=0;i<n;i++)
{
    scanf("%lld",&arr[i]);
}
for(i=0;i<n;i++)
{
    prod=prod*arr[i];
}

printf("%lld",abs(prod));


return 0;
}

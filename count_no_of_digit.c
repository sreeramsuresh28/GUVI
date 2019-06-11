
#include<stdio.h>
int main()
{
    long long int num,count=0,rem;
    scanf("%lld",&num);
    while(num)
    {
        rem=num%10;
        count++;
        num=num/10;
    }
    printf("%lld",count);
    return 0;
}

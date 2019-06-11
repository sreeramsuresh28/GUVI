#include<stdio.h>
int main()
{
   long long int num,rem,dig=0;
    scanf("%lld",&num);
    while(num)
    {
        rem=num%10;
        dig=(dig*10)+rem;
        num=num/10;
        
    }
    printf("%lld",dig);
    return 0;
}
#include<stdio.h>
int main()
{
   long long int num,dig=0,rem;
    scanf("%lld",&num);
    while(num)
    {
        rem=num%10;
        dig=dig+(rem*rem);
        num=num/10;
    }
    printf("%lld",dig);
    return 0;
}

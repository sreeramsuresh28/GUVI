#include<stdio.h>
int main()
{
    long long int num,count=0,rem;
    scanf("%d",&num);
    while(num)
    {
        rem=num%10;
        count++;
        num=num/10;
    }
    printf("%d",count);
    return 0;
}
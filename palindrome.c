#include<stdio.h>
int main()
{
    int num,rem,dig=0,temp;
    scanf("%d",&num);
    temp=num;
    while(num)
    {
        rem=num%10;
        dig=(dig*10)+rem;
        num=num/10;
    }
    if(dig==temp)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
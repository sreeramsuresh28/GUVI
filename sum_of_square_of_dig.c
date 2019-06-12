#include<stdio.h>
int main()
{
    int num,dig=0,rem;
    scanf("%d",&num);
    while(num)
    {
        rem=num%10;
        dig=dig+(rem*rem);
        num=num/10;
    }
    printf("%d",dig);
    return 0;
}
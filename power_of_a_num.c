#include<stdio.h>
int main()
{
    int num,po,i,temp=1;
    scanf("%d %d",&num,&po);
    for(i=1;i<=po;i++)
    {
        temp=temp*num;
    }
    printf("%d",temp);
    return 0;
    
}

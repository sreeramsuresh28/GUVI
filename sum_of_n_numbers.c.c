#include<stdio.h>
int main()
{
    
int num,itr,sum=0;
scanf("%d",&num);
for(itr=1;itr<=num;itr++)
{
    sum=sum+itr;
}

printf("%d",sum);
return 0;
}
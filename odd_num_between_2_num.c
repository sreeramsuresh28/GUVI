#include<stdio.h>
int main()
{
    int num1,num2,i;
    scanf("%d %d",&num1,&num2);
    for(i=num1+1;i<num2;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
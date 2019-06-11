#include<stdio.h>
int main()
{
    int yy;
    scanf("%d",&yy);
    if(yy%400 == 0)      
    {       printf("yes");
    }
    else if(yy % 100 == 0)     
    { printf("no");
    }
    else if(yy % 4 == 0)     {
   printf("yes");}
    else                        {
        printf("no");}
        return 0;
}
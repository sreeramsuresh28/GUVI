#include<stdio.h>
 
void  main()
{
  int i,n,rot,temp;
  
    scanf("%d %d",&n,&rot);
    int a[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    while(rot>n)
    {
        rot=rot-n;
    }
 while(rot)
 {
    temp=a[n-1];
    for(i=n-1;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=temp;
    rot--;
 }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
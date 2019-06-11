#include<stdio.h>
#include <string.h>

char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}


int main()
{
    char s[1024];
    scanf("%[^\n]s",s);
    char *marker=s;
    for(char *p=s;*p;p++)
    {
        if(*p==' ')
        {
            *p='\0';
        strrev(marker);
        *p=' ';
        marker=p+1;
        }
    }
strrev(marker);
printf("%s",s);
}
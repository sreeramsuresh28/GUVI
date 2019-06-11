#include<stdio.h>
#include<ctype.h>
int main()
{
char c;
scanf("%c",&c);
if(isalpha(c) != 0) {
    printf("Alphabet");
}
else {
    printf("No");
}
return 0;
}
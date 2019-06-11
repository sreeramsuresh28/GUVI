#include<stdio.h>
#include <ctype.h>

int main()
{
    char num;
    scanf("%c",&num);
    if(isalpha(num) == 0)   {
        printf("Invalid");
        return 0;
    }

    num = tolower(num);
    if(num=='a' || num=='e' || num=='i' || num=='o' || num=='u')
    {
        printf("Vowel");
    }
    else
    {
        {
            printf("Consonant");
        }
    }
    return 0;

}

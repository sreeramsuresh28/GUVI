#include<stdio.h>
#include<string.h>
int main()
{
    int lookup[100000] = { 0 };
    int n;
    scanf("%d", &n);
    int a;
    int hasRep = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &a);
        lookup[a]++;
        if(lookup[a] == 2)      {
            printf("%d ", a);
            hasRep = 1;
            break;
        }
    }
    if(!hasRep) printf("unique");

    return 0;
}

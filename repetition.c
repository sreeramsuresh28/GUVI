#include<stdio.h>
#include<string.h>
int main()
{
    int lookup[100000] = { 0 };
    int n;
    scanf("%d", &n);
    int a;
    for(int i = 0; i < n; i++) {
        scanf("%d", &a);
        lookup[a]++;
    }

    int hasRep = 0;
    for(int i = 0; i < 100000; i++)  {
        if(lookup[i] > 1) {
            printf("%d ", i);
            hasRep = 1;
        }
    }

    if(!hasRep) printf("unique");

    return 0;
}
#include<stdio.h>
int main()
{
    int i;
    int arr[100000];
    int n;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] < arr[j]) {
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        printf("%d", arr[i]);
    }
return 0;
}
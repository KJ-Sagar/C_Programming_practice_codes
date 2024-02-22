#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a;
    int n;
    printf("Enter the size of the array");
    scanf("%d",&n);
    a=(int *)malloc(n * sizeof(int));

    printf("Enter the elements of the array:\n");
    int i;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements of the array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    free(a);
    return 0;
}
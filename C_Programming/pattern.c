#include<stdio.h>
#include<math.h>
int main() { int n; scanf("%d", &n);

// Upside 50%
  for (int i = n; i >0; i--)
{
    // Upside left 25%
    for (int  j = n; j>0; j--)
    {
        if (i>j)
        {
           printf("%d ",i);
        }
        else{
            printf("%d ",j);
        }
    }

    // Upside right 25%
    for (int  j = 2; j<=n; j++)
    {
        if (j>i)
        {
           printf("%d ",j);
        }
        else{
            printf("%d ",i);
        }

    }
    printf("\n");
}

// Down side 50%
for (int i = 2; i<=n; i++)
{
    // Downside left 25%
    for (int j = n; j>0; j--)
    {
        if (i>j)
        {
           printf("%d ",i);
        }
        else{
            printf("%d ",j);
        }
    }
    // UDownside right 25%
    for (int  j = 2; j<=n; j++)
    {
        if (j>i)
        {
           printf("%d ",j);
        }
        else{
            printf("%d ",i);
        }
    }
    printf("\n");
}

return 0;
}
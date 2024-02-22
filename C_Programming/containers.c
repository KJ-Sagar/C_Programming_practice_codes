#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)	//input
    scanf("%d",&a[i]);
  for (int i = 0; i < n-1; i++)
  {
    for (int j = 0; j < n-i-1; j++) 
    {
      if (a[j] > a[j+1])
      {
        // swapping using a temporary variable
               int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
  }
  int n1=n;
  if(n1%2==0)
    n1=n1/2;
  else
    n1=(n1/2)+1;
  int r=n;
  int l=0;
  for(int i=0;i<n1;i++)
  {
    printf("%d %d ",a[r],a[l]);
    r--;
    l++;
  }
   return 0;
}
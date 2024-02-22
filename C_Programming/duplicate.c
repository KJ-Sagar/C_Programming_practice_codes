#include <stdio.h>
int main()
{
  int n,arr[n],c=0;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  scanf("%d",&arr[i]);
  for(int i=0;i<n;i++)
  {
    c=0;
    for(int j=i;j>=0;j--)
    {
      if(arr[j]==arr[i])
      {
        c++;
      }
    }
    if(c!=1)
    {
      continue;
    }
    else
      printf("%d ",arr[i]);
  }        
   return 0;
}
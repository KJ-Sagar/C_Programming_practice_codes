#include <stdio.h>
int main()
{
int n,arr[n],arrmin=0;
  scanf("%d",&n);
  for(int i=0;i<n;i++) //input
  {
    scanf("%d",&arr[i]);
  }
for(int i=0;i<n;i++)
{
  for(int j=0;j<n-1;j++)
  {
    if(arr[j]>arr[j+1])
    {
      int temp=arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=temp;
    }
  }
}
  printf("The Sorted array is:\n");
  for(int i=0;i<n;i++)
    printf("%d\n",arr[i]);
     return 0;

}
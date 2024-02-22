#include<stdio.h>
int main()
{
  int n,arr[n];
  scanf("%d",&n);
  for(int i=0;i<n;i++) 
  {
    scanf("%d",&arr[i]);
  }
  int pos,ele;
  scanf("%d %d",&pos,&ele);
  if(pos>=0 && pos<=n)
  {
  for(int i=n;i>=pos;i--)
  {
    arr[i]=arr[i-1];
  }
  	arr[pos-1]=ele;
    printf("Array after insertion is\n");
  	for(int i=0;i<=n;i++)
  		printf("%d\n",arr[i]);
  }
  else
  printf("Invalid Input");
return 0;

}

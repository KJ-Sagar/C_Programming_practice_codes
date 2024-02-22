#include <stdio.h>
int main()
{
int m,n,sum=0;
  scanf("%d%d",&m,&n);
  int a[m][n];
  for(int i=0;i<m;i++)			//accepting values into the matrix
  	for(int j=0;j<n;j++)
      scanf("%d",&a[i][j]);
  
  for(int i=0;i<m;i++)
  {
    sum=sum+a[0][i];
    sum=sum+a[m-1][i];
  }
  for(int j=1;j<n-1;j++)
    sum=sum+a[j][m-1-j];
  printf("Sum of Zig-Zag pattern is %d",sum);
   return 0;
}
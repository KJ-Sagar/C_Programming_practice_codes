#include <stdio.h>
int main()
{
	int n1,n2,sum=0,t=0;
  scanf("%d %d",&n1,&n2);
  int a[n1][n1];int b[n2][n2];int c[n1][n1];
  
  for(int i=0;i<n1;i++)		//accepting first matrix
    for(int j=0;j<n1;j++)
      scanf("%d",&a[i][j]);
  
  for(int i=0;i<n2;i++)		//accepting second matrix
   for(int j=0;j<n2;j++)
     scanf("%d",&b[i][j]);
 
   for(int i=0;i<n2;i++)		//converting c matrix to 0
   	for(int j=0;j<n2;j++)
        c[i][j]=0;
    
  for(int i=0;i<n2;i++)	//multiplication operation
  {
    for(int j=0;j<n1;j++)
    {
    	for(int k=0;k<n1;k++)
        {
          c[i][j]=c[i][j]+a[i][k]*b[k][j];
  		}
    }
  }
  for(int i=0;i<n1;i++)
    {
    for(int j=0;j<n2;j++)
    	{
   			 printf("%d ",c[i][j]);
        }
        printf("\n");
    }
   return 0;
}
#include <stdio.h>
int main()
{
int m=0,n=0,d1=0,d2=0;
  scanf("%d%d",&m,&n);
  for(int i=m;i<=n;i++)
  {
  d1=i%10;
  d2=i/10;
  if((d1*d2)+(d1+d2)==i)
    printf("%d\n",&i);
  }
   return 0;
}
/*Paper of size A0 has dimensions 1189 mm x 841 mm. Each
subsequent size A(n) is defined as A(n-1) cut in half parallel to its
shorter sides. Thus paper of size A1 would have dimensions 841
mm x 594 mm. Write a program to calculate and print paper sizes
A0, A1, A2, … A8.*/
#include <stdio.h>
int main()
{
    float len=1189,width=841; 
    for (int i = 0; i <= 8; i++) 
    {   
        if(i==0)
        {
            printf("A%d:len %.1f,width %.1f\n",i,len,width);
        }
        else if(i%2==0)
        {
            len=len/2;
            printf("A%d:len %.1f,width %.1f\n",i,len,width);
        }
        else
        {
            width=width/2;
            printf("A%d:len %.1f,width %.1f\n",i,len,width);
        }
    }
}

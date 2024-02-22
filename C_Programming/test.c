#include <stdio.h>
#include <string.h>
int main() 
{   
    int arr[10];
    char line[100];
    char letter[100];
    scanf("%s",line);
    int t= strlen(line);
    for (int i = 0; i < t; i++)
    {
        letter[i] = line[i];
    }
     for(int i=0;i<t;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(letter[i]==j)
            {
                arr[j]++;
            }
        }
    }
    for(int i=0;i<10;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
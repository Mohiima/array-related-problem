#include<stdio.h>
int main()
{
    int i,min,arr[5];
    printf("enter an array : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(i=1;i<5;i++)
    {
        if (min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("min is %d",min);
}


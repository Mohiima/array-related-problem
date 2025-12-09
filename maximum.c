#include<stdio.h>
int main()
{
    int i,max,arr[5];
    printf("enter an array : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=1;i<5;i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("max is %d",max);
}

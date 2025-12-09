#include<stdio.h>
int main()
{
    int a[5],i,pos;
    printf("enter an aray : \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter delete positon : ");
    scanf("%d",&pos);
    for(i=pos;i<5;i++)
    {
        a[i]=a[i+1];
    }
    printf("after deleting, the array is :\n");
    for(i=0;i<4;i++){
        printf("%d ",a[i]);
    }
}

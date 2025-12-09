#include<stdio.h>
int main()
{
    int n;

    printf("enter any size :");
    scanf("%d",&n);
    int i,sum=0,arr[n];
    float ave;
    printf("enter any array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];

    }
    printf("sum is %d \n",sum);
    ave=sum/(float)n;
    printf("average is %.2f ",ave);
}

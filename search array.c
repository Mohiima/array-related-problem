#include<stdio.h>

int main()
{
    int num[]={10,20,30,40,50,60};
    int search, i, found = 0;

    printf("Enter Number: ");
    scanf("%d", &search);

    for (i = 0; i < 6; i++)
    {
        if (num[i] == search)
        {
            printf("%d is found at location %d\n", num[i], i+1);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Not Found!");
    }

    return 0;
}

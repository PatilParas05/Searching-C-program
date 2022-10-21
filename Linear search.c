#include<stdio.h>
void main()
{
    int a[10],n=10,item,i;
    printf("Enter 10 Numbers");
    for(i=1;i<=10;i++)
        scanf("%d",&a[i]);

    printf("Enter the number to search");
    scanf("%d",&item);
    i=0;
    while(i<n)
    {
        if (a[i]==item)
        {
            printf("%d is found at %d position",item,i);
            break;
        }
        i++;
    }
    if (i==n)
        printf("%d is not found in the array",item);
}

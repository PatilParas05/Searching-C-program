#include<stdio.h>
void main()
{
   int a[10],item,beg=0,end=9,mid,i;
   printf("Enter 10 numbers in sorted array");
   for(i=0;i<10;i++)
    scanf("%d",&a[i]);

   printf("Enter the number to search");
   scanf("%d",&item);
   while(beg<=end)
   {
       mid=(beg+end)/2;
       if(a[mid]==item)
       { mid=mid+1;
           printf("%d is found at %d position",item,mid);break;
       }
       else
    if(item>a[mid])
        beg=mid+1;
       else
        end=mid-1;
   }
if(beg>end)
    printf("%d is not found in array",item);
}

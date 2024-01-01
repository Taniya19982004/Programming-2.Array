#include<stdio.h>
void main()
{
    int a[100];
    int n,i,minimum=9995;
    printf("enter a number");
    scanf("%d",&n);
    printf("enter an array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<minimum)
        {
            minimum=a[i];

        }
    }
     printf("minimum value of array element is :%d",minimum);
}

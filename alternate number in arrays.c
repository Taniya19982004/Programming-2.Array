#include<stdio.h>
void main()
{
    int a[100];
    int i,n;
    printf("Enter a number");
    scanf("%d",&n);
    printf("enter an array element");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("this is alternative element of array\n");
    for(i=0;i<n;i=i+2)
    {
        printf("%d\t ",a[i]);

    }
}

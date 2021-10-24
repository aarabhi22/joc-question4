#include<stdio.h>
void main()
{
    int a[10],i,j,sum,k,n,flag=0;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter the sum\n");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            sum=a[i]+a[j];
            if(sum==k)
            {
                printf("indices are found at %d and %d\n",i+1,j+1);
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
        printf("no indices found\n");
}

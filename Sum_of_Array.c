#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n],sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
}
#include<stdio.h>
int main()
{
    int X;
    scanf("%d",&X);
    if(4*X<=1000)
    {
        printf("YES");
    }
    else if(4*X>1000)
    {
        printf("NO");
    }
}

#include<stdio.h>
int main()
{
    int i,n,j,sum=0;

    scanf("%d",&n);
    i=n;
    while(n!=0)
    {
    j=n%10;
    sum=sum*10+j;
    n=n/10;
    }


    if(sum==i)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}


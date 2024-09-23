
#include<stdio.h>
int main()
{
    int arr[10],i,c=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        if(arr[i]>=1000 && arr[i]<10000)
        {
            if(arr[i]%4==0)
            {
                c++;
            }
        }
    }
    printf("c=%d",c);
    return 0;
}


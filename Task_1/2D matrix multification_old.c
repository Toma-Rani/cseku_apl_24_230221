
 #include<stdio.h>
int main()
{
    int i,j,r1=4,c1=3,r2=3,c2=5,sum=0,k;
    int A[4][3],B[3][5],C[4][5];
    while(c1!=r2)
    {
        printf("error");
    }
    printf("enter A");
    for(i=0;i<r1;i++)

    {
        for(j=0;j<c1;j++)
        {

            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

   printf("enter B");
    for(i=0;i<r2;i++)

    {
        for(j=0;j<c2;j++)
        {

            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
                sum=sum+(A[i][k]*B[k][j]);
            }
            C[i][j]=sum;
            sum=0;
        }
    }



   printf("enter C");
    for(i=0;i<r1;i++)

    {
        for(j=0;j<c2;j++)
        {

            printf("%d",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}



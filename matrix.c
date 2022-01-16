#include<stdio.h>

int main()
{
    int i,j,k,r1,r2,c1,c2,sum=0;
    int A[5][5],B[5][5],C[5][5];

    printf("Enter number of rows and columns for matrix 1\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter number of rows and columns for matrix 2\n");
    scanf("%d%d",&r2,&c2);

    if(c1==r2)
    {
        //scanning
        printf("Enter elements of matrix 1\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&A[i][j]);
            }
        }
        printf("Enter elements of matrix 2\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&B[i][j]);
            }
        }
       
        // operation
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                for(k=0;k<c1;k++)
                {
                    sum=sum+A[i][k]*B[k][j];
                }
                C[i][j]=sum;
                sum=0;
            }
        }
        printf("\nThe Multiplied Matrix is :-\n");
        //printing
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d ",C[i][j]);
            }
            printf("\n");
        }
    }
    else
    printf("Matrix multiplication not possible");
return 0;
}


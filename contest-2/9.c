#include<stdio.h>
int main ()
{
    int n=3,m=3;

    int matrix[n][m];
    printf("Entering the matrix:\n");
    for(int i=0;i<n;i++)
        {
        for(int q=0;q<m;q++)
        {
            scanf("%d",&matrix[i][q]);
        }
    }
    printf("\nThe Transpose of the given Matrix:\n");

    for(int i=0;i<n;i++)
        {
        for(int q=0;q<m;q++)
        {
            printf("%d ",matrix[q][i]);
        }
        printf("\n");
    }


}
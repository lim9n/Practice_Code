#include<stdio.h>
#include<string.h>

float median(int a[],int n);

int main()
{
    int n,i;
    scanf("%d",&n);
    int num[n];

    for(i=0; i<n; i++)
        scanf("%d", &num[i]);
    
    float mid= median(num,n);

    printf("The median is = %f",mid);
}


float median(int a[],int n)
{
    int i, j,temp;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    if (n%2!=0)
            return a[n/2];
    else
    return (float)(a[n/2] + a[(n/2) - 1])/2;

    
}
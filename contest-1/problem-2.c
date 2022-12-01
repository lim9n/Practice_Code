#include<stdio.h>

int main()
{
    int n,k,i;
    int count=0;
    scanf("%d %d",&n,&k);
    int player[100];


    for(i=0;i<n;i++)
    {
        scanf("%d",&player[i]);
    }

    for (i=0;i<n;i++)
    {
        if (player[i]<k)
        {
            count++;
        }

    }
    printf("%d\n",count);
}

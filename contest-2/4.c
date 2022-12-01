#include<stdio.h>
int main()
{
    int n,k,i;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
        {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }
    }

      printf("\n");
      
      if (k<=n/2)
      {
            printf("The %dth element in this sequence is %d.",k,2*k);
      }
      else
      printf("The %dth element in this sequence is %d.",k,((k-n/2)*2)-1);
}

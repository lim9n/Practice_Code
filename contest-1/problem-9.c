#include<stdio.h>
int main()
{
      int n,i,k,student[25];

      scanf("%d",&n);

      for(i=0;i<n;i++)
      {
            scanf("%d",&student[i]);

      }
            scanf("%d",&k);

      for(i=k;i<n;i++)
      {
            printf("%d ",student[i]);
      }
      for (i = 0; i < k; i++)
      {
            printf("%d ",student[i]);
      }

}

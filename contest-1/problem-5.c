#include<stdio.h>

int main()
{
    int n,i,charge;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d%%",&charge);
            if(charge==100)
            {
                printf("0 minutes\n");
            }
            else if(charge>80)
            {
                printf("%d minutes\n",(100-charge)*3);
            }
            else if(charge <=80 && charge>=60)
            {
                printf("%d minutes\n",60+(80-charge)*2);
            }
            else if(charge<60)
            {
                printf("%d minutes\n",100+(60-charge));
            }
    }


}

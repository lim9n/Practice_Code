#include<stdio.h>
int main()

{
    int t,i;
    long long int s,a,b,c,sum,missing_number;

    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%lld %lld %lld %lld",&s,&a,&b,&c);
            sum=a+b+c;

        missing_number=(s-sum);

        printf("%lld\n",missing_number);
    }
    return 0;


}

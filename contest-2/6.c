#include<stdio.h>

long long int fact(int a)

{
    long long int m=1;

    for(int i=1; i<=a; i++)

    {
        m*=i;
    }
    return m;

}

double ratio(int x,int y)

{
      double a=fact(x);
      double b=fact(y);
      double fact_ratio=a/b;
      return fact_ratio;
}


int main()

{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%lf",ratio(x,y));
    return 0;

}
#include<stdio.h>
int add_three_number(int a, int b, int c)
{
	return a+b+c;
}
int main()
{
    int a,b,c=0,sum;
    scanf("%d %d",&a,&b);
    sum=add_three_number(a,b,c);
    printf("%d",sum);
    return 0;
}
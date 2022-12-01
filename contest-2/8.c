#include<stdio.h>
#include<string.h>
int main()
{
    char c[100];
    int i,n,temp;
    scanf("%s",&c);
    scanf("%d",&n);
    int len=strlen(c);
    for(i=0;i<len;i++)
    {
        c[i]=c[i]+n;
        if(c[i]>122)
        {
            temp=c[i]-122;
            c[i]=96+temp;
        }
    }
    printf("%s\n",c);
    return 0;
}
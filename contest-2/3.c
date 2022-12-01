#include<stdio.h>
#include<string.h>
int string_check(char a[]);

int main()
{
    char a[1000];
    scanf("%s", &a);
    printf("%d",string_check(a));
    if (string_check(a))
      printf("Yes");
      else
      printf("No");    
    
}

int string_check(char a[])
{
      int i,cout1=0,cout2=0,cout3=0;
      int len=strlen(a);

      for (i=0;i<len;i++)
      {
            if (a[i]=='1')
                  cout1++;
            else if (a[i]=='9')
                  cout2++;
            else if (a[i]=='7')
                  cout3++;            
      }

      if (cout1>0 && cout2>0 && cout3>0)
            return 1;
      else
            return 0;
      
}


#include<stdio.h>

int check_prime(int);

main()
{
   int a,t,i,m=0,result=0;
   int num[100];
   scanf("%d",&t);
   for(i=0;i<t;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<t;i++){
            result = check_prime(num[i]);
            if ( result == 1 )
                printf("Yes\n");
            else
                printf("No\n");
    }

   return 0;
}

int check_prime(int a)
{
   int c;

   for ( c = 2 ; ((c <= a - 1)||(a==1)) ; c++ )
   {
      if (( a%c == 0 )||(a==1))
     return 0;
   }
   return 1;

}

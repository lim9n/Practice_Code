#include<stdio.h>

int main(){
    int i , k, n, safe;
    scanf("%d",&n);
    for(i = 0 ; i < n;i++){
        safe = 0;
        scanf("%d",&k);
        for(int j = 1; j <= k;j++){
            if(k % j == 0){
                safe ++;
            }
        }
        if (safe == 2){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
    return 0;
}

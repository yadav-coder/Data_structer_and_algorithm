#include<stdio.h>
void pattern(int n){
        if(n==0){
            printf("\n");
            return;
        }else{
            printf("0");
            pattern(n-1);
            printf("1");
            pattern(n-1);
        }
    }
int main(){
    pattern(4);
    return 0;
}
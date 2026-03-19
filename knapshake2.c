
#include<stdio.h>
int max(int m,int n){
    if(m>n){
        return m;
    }else{
        return n;
    }
}
 int knapshak(int n, int m, int p[],int w[] ){
    if(n==0||m==0){
        return 0;
    }
    if(m>=w[n-1]){
       int  no=knapshak(n-1,m,p,w);
       int yes=knapshak(n-1,m-w[n-1],p,w)+p[n-1];
       return max(yes,no);
    }
    else {
        return knapshak(n-1,m,p,w);
    }
}
int main(){
    int m=5;
    int n=4;
    int p[]={6,5,3,8};
    int w[]={1,2,1,2};
    int re=knapshak(n,m,p,w);
    printf("%d",re);
}
#include <stdio.h>
#include <math.h>
#define ml 1000000000

int prod(int n){
    int mult = 1;
    while(n>0){
       mult=mult*(n%10);
       n=n/10;
       if(mult==0 || mult>ml){
        return -1;
       }
    }
    return mult;
}

int evo(int a){
    if(a%2==0){
        return 1;
    }
    return 0;
}

int cube(int n){
    int cu=n%10;
    while(n>0){
        if(cu<n%10){
            cu=n%10;
        }
        n=n/10;
    }
    
    return cu*cu*cu;
}

int square(int n){
    int cu = 0;
    while(n>0){
        cu = cu + ((n%10) * (n%10));
        n=n/10;
    }
    return cu;
}

int playwidnum(int n){
     int a = prod(n);
     int p;
     if(a==-1){
        return -1;
     }
     int c = evo(a);
     if(c==1){
        p= cube(n);
     }
     else{
        p= square(n);
     }
     return p;

}

int main(){
    int n;
    scanf("%d",&n);
    if(n==0){
        printf("%d",-1);
    }
    else{
       int ans = playwidnum(n);
       printf("%d",ans);
    }
    
}
#include <stdio.h>
#include <math.h>
#include <string.h>

int sq(int n){
    for(int i=i;i<9;i++){
       if(n==i*i){
        return 1;
       }
       else{
        if(n%2==0)
        // if(n==2){
        //     return 2;
        // }
        // if(n==3){
        //     return 3;
        // }
        // if(n==5){
        //     return 2;
        // }
        // if(n==6){
        //     return 3;
        // }
        // if(n==7){
        //     return 4;
        // }
        // if(n==8){
        //     return 2;
        // }
        // if(n==10){
        //     return 2;
        // }
        // if(n==11){
        //     return 3;
        // }
        // if(n==12){
        //     return 4;
        // }
        // if(n==13){
        //     return 5;
        // }
        // if(n==14){
        //     return 3;
        // }
        // if(n==21){
        //     return 3;
        // }
        // if(n==17){
        //     return 2;
        // }
        // if(n==23){
        //     return 3;
        // }
       }
    }
    return 1;
}

int main(){
    int n;
    scanf("%d",&n);

    int b= sq(n);
    // char st[10];
    // for(int i=0;i<10;i++){
    //     scanf("%c",&st[i]);
    // }
    // for(int i=0;i<10;i++){
    //     printf("%c",st[i]);
    // }

    printf("%d",b);
    
}
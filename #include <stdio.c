#include <stdio.h>
#include <string.h>
int main(){
    // char st[10];
    // for(int i=0;i<10;i++){
    //     scanf("%c",&st[i]);
    // }
    // for(int i=0;i<10;i++){
    //     printf("%c",st[i]);
    // }

    char st[10]="harshit";
    int p = strlen(st);
    int n;
    scanf("%d",&n);
    int c;
    int pd;
    for(int i=0;i<p-n+1;i++){
         c=0;
         pd=0;
        for(int j=i;j<p-n+1;j++){
            for(int k=0;k<n;k++){
               if(st[i+k]==st[j+k]){
                 c++;
               }
            }
            if(c==n){
               pd=pd+1;
            }
        }
        for(int t=i;t<i+n;t++){
            printf("%c",st[t]);
        }
        if(pd/2 != 0){
           printf(" %d\n",pd/2);    
        }
        else{
           printf(" %d\n",1); 
        }
    }
}
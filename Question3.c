#include <stdio.h>
#include <string.h>


int main(){
    int n,z;
    scanf("%d %d",&n,&z);
    char st[10];
    scanf("%s",&st);
    
    // char st1[10][n] = {"","","","","","","","","",""};
    // int p = strlen(st);
    // for(int i=0;i<p;i++){
    //     for(int j=0;j<n;j++){
    //         st1[i]= st1[i]+st[j];
    //     }
    // }

    // for(int i=0;i<10;i++){
    //     int count=0;
    //     for(int j=0;j<10;j++){
    //         if(st1[i]==st1[j]){
    //             count++;
    //         }
    //     }
    //     printf("%s %d\n",st1[i],count);
    // }
    
    // for(int i=0;i<z;i++){
    //     scanf("%c",&st[i]);
    // }
    
    for(int i=0;i<z;i++){
           int count=0;
           int p=0;
           if(i+n-1>z){
            break;
           }
        for(int j=i;j<z;j++){
            for(int k=0;k<n;i++){
                if(st[i+k]==st[j+k]){
                    count++;
                }
            }
            if(count==n){
                p=p+1;
            }
        }
        for(int i=0;i<n;i++){
            printf("%c",st[i]);
        }
        printf(" %d\n",p);
    }


}
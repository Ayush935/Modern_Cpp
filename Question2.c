
#include <stdio.h>
#include <math.h>



int val1(int a){
  
  
  a=a-(a%10);
    if(a==10){
        return 3;
    }
    if(a==20){
        return 6;
    }
    if(a==30){
        return 6;
    }
    if(a==40){
        return 6;
    }
    if(a==50){
        return 5;
    }
    if(a==60){
        return 5;
    }
    if(a==70){
        return 7;
    }
    if(a==80){
        return 6;
    }
    if(a==90){
        return 4;
    }
    return -1;
}


int val(int a){
    if(a>9){
        return val1(a);
    }
    if(a==0){
        return 4;
    }
    if(a==1){
        return 3;
    }
    if(a==2){
        return 3;
    }
    if(a==3){
        return 5;
    }
    if(a==4){
        return 4;
    }
    if(a==5){
        return 4;
    }
    if(a==6){
        return 3;
    }
    if(a==7){
        return 5;
    }
    if(a==8){
        return 5;
    }
    if(a==9){
        return 4;
    }
   return -1;
}

void sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n-1;j++){
            if(arr[i]<arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int arr[n-1];
    int ans=0;
    for(int i=0;i<n-1;i++){
       int c=0;
       c = (a[i]- a[i+1]);
       if(c<0){
        c=-c;
       }
       if(c<10){
        arr[i]=val(c);
       }
       else if(c<100){
          int s = val(c%10);
          int d = val1(c);
          arr[i]=s+d;
       }
       else {
        int d = c/100;
        int f = val(d);
        int e = val1(c-(d*100));
        arr[i]=f+e+7;

       }
    }

   sort(arr,n);



}

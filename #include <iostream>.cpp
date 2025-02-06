#include <iostream>
using namespace std;



int main(){
    string s;
    cin>>s;
    int n;
    cin>>n;
    int n = s.size();
    vector<string>p;
     
     for(int i=0;i<p-n+1;i++){
        string st1 = ""; 
        for(int j=i;j<n;j++){
            p= p+s[j];
        }
        v.push_back(p);
    }

    int num = p.size();
    for(int i=0;i<num;i++){
        int c=0;
        for(int j=0;j<num;j++){
            if(p[i]==p[j]){
                c++;
            }
        }
        cout<<p<<" "<<c<<endl;
    }


  
}
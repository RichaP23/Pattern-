#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>=0;j--){
            if(j==0){
                cout<<"*";
                break;
            }
            cout<<" ";
        }
        for(int j=2*i-2;j>=1;j--){
            if(j==1){
                cout<<"*";
                break;
            }
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i=5;i>=1;i--){
        for(int j=n-i;j>=0;j--){
            if(j==0){
                cout<<"*";
                break;
            }
            cout<<" ";
        }
        for(int j=i*2-2;j>=1;j--){
            if(j==1){
                cout<<"*";
                break;
            }cout<<" ";        
        }
        cout<<endl;
    }
    return 0;
}

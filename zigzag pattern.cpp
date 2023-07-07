#include<iostream> 
using namespace std;
int main(){
    int n=8;
    
    for(int i=1;i<=n;i++){
        
        for(int j=n-i;j>=0;j--){
            if(j==0){
                cout<<"*";
                
                break;
            }
            cout<<" ";
        }
        for(int k=i*2-2;k>=1;k--){
            if(k==1){
                cout<<"*";
                break;
            }
            cout<<" ";
        }
        for(int k=(n-i+1)*2-2;k>=1;k--){
            if(k==1){
                cout<<"*";
                break;
            }
            cout<<" ";
        }
        for(int k=i*2-2;k>=1;k--){
            if(k==1){
                cout<<"*";
                break;
            }
            cout<<" ";
        }
        cout<<endl;
    }
}

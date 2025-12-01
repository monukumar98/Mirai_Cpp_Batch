#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0,b=1;
    for(int i=1; i<=n; i++){
        // cout<<a<<endl; puri serise print krne ke liye 
    int c=a+b;
         a=b;
         b=c;
    }
    cout<<a<<endl;
    
    
}
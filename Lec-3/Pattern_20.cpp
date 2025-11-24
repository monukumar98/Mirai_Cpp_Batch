#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    int space1=n/2;
    int space2=-1;
    while(row<=n){
        // space1
        int i=1;
        while(i<=space1){
            cout<<"  ";
            i++;
        }
        //star
        cout<<"* ";
        //space2
        int j=1;
        while(j<=space2){
             cout<<"  ";
            j++;
        }
        //star
        if(row!=1 && row!=n){
        cout<<"* ";
        }
        // Mirror
        if(row<n/2+1){
            space1--;
            space2+=2;
        }
        else{
            space1++;
            space2-=2;
        }
        // next row prep
        row++;
        cout<<endl;
    }
    

}
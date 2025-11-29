#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int row=1;
  int star=n;
    while(row<=n){
     int i=1;
     int num=n;
     //star
     while(i<=star){
         if(i==star-row+1){
             cout<<"* ";
         }
         else{
          cout<<num<<" ";
         }
        i++;
        num--;
     }
     row++;
     cout<<endl;

    }

    return 0;
  }





  
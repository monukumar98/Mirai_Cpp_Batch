#include <iostream>
using namespace std;
int main() {
   int n;
    cin>>n;
    int row=1;
    int star=1;
    int space=2*n-3;
    while(row<=n){
        // star
        int i=1;
        while(i<=star){
            cout<<"* ";
            i++;
        }
        // space
        int j=1;
        while(j<=space){
            cout<<"  ";
            j++;
        }
        // star
         int k=1;
         if(row==n){
             k=2;
         }
        while(k<=star){
            cout<<"* ";
            k++;
        }
        // next row ki prep
        star++;
        space=space-2;
        row++;
        cout<<endl;
    }

}

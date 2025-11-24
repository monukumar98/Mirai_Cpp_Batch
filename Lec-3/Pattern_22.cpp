#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int row=1;
    int star=n;
    int space=-1;
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
         if(row==1){
             k=2;
         }
        while(k<=star){
            cout<<"* ";
            k++;
        }
        // next line ki prep
        star--;
        space+=2;// space = space + 2;
        row++;
        cout<<endl;
    }
}

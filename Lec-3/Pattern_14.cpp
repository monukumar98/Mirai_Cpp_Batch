#include <iostream>
using namespace std;
int main () {
    int n;
    cin>>n;
    int row=1;
    int star=1;
    int space=n-1;
    while(row<=2*n-1){
        // space
        int i=1;
        while(i<=space){
            cout<<"  ";
            i++;
        }
        //star
        int j=1;
        while(j<=star){
            cout<<"* ";
            j++;
        }
        // mirror
        if(row<n){// mirror wale line se pehle code upper part ke A/c likhna hai 
        star++;
        space--;
        }
        else{
            star--;
            space++;
        }
        // next row ki prep
        row++;
        cout<<endl;
    }

}
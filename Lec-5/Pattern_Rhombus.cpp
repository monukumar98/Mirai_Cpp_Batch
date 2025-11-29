#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
    int row=1;
    int star=1;
    int space=n-1;
    int val=1;
    while(row<=2*n-1){
        // space
        int i=1;
        while(i<=space){
            cout<<"  ";
            i++;
        }
        // star 
        int j=1;
        int p=val;// every row ka start point de rha hai 
        while(j<=star){
            cout<<p<<" ";
            if(j<star/2+1){
            p++;
            }
            else{
                p--;
            }
            j++;
        }
        // mirror
        if(row<n){
            star+=2;
            space--;
            val++;
        }
        else{
            star-=2;
            space++;
            val--;
        }
        // next line ki prep
        row++;
        cout<<endl;
    }
	
      

}	
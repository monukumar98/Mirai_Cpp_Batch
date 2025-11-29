#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int row=1,star=1,space=n-1;
	while(row<=n){
		// sapce
		int i=1;
		while(i<=space){
			cout<<"  ";
			i++;
		}
		// star
        int val=row;
		int j=1;
		while(j<=star){
			cout<<val<<" ";
            if(j<star/2+1){
            val++;
            }
            else{
                val--;
            }
			j++;
		}
		// next row ki prep
		star=star+2;
		space--;
		row++;
		cout<<endl;
	
	}

}	
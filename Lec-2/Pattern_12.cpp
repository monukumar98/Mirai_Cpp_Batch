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
			cout<<"  ";// 2 gap likhna hai always kyu blanced pattern krne ke liye 
			i++;
		}
		// star
		int j=1;
		while(j<=star){
			if(j%2!=0){// odd
               cout<<"* ";
			}
			else{
				cout<<"! ";
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
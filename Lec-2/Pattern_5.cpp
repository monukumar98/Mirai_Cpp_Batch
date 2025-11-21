// Pattern_5.cpp
#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int row=1,star=n,space=0;
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
			cout<<"* ";
			j++;
		}
		// next row ki prep
		star--;
		space++;
		row++;
		cout<<endl;
	
	}

}	
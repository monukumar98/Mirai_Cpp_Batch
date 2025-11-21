//Pattern_2.cpp
#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int row=1,star=1;
	while(row<=n){
		// star
		int i=1;
		while(i<=star){
			cout<<"* ";
			i++;
		}
		// next row ki prep
		cout<<endl;
		row++;
		star++;

	}

}
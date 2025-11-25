#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int row=1,star=n;
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
	}
	return 0;
}
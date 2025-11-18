#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n>=75){
		cout<<"A"<<endl;
	}
	else if(n>=65 && n<75){
		cout<<"B"<<endl;
	}
	else if(n>=55 && n<65){
		cout<<"C"<<endl;
	}
	else if(n>=45 && n<55){
		cout<<"Pass"<<endl;
	}
	else{
		cout<<"Fail";
	}
}
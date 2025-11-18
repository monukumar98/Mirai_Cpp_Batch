// Lottery_Game_2.cpp
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n>=100 && n<=200){
		cout<<"Bike"<<endl;
		// logic --> Hero | KTM 
		if(n<=150 ){
           cout<<"Hero"<<endl
		}
		else{
            cout<<"KTM"<<endl;
		}
	}
	else if(n>=282 && n<=473){
		cout<<"Macbook"<<endl;
		if(n<=381){
			cout<<"M1 Macbook"<<endl;
		}
		else{
			cout<<"M2 Macbook"<<endl;
		}

	}
	else if(n>=50 && n<=93){
		cout<<"Cycle"<<endl;
		if(n<=80){
			cout<<"ATLAS"<<endl;
		}
		else{
			cout<<"AVON"<<endl;
		}

	}
	else if(n>=789 && n<=989){
		cout<<"Kurkure"<<endl;
		if(n<=887){
			cout<<"Chilli Kurkure"<<endl;
		}
		else{
			cout<<"Normal Kurkure"<<endl;
		}

	}
	else{
		cout<<"LOL"<<endl;

	}
}




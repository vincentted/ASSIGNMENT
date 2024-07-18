#include <iostream>
using namespace std;

int main() {
	int opt;
	cout<<"1.Red light"<<endl;
	cout<<"2.yellow light"<<endl;
	cout<<"3.Green light"<<endl;
	cout<<"Select options 1,2,3"<<endl;
	cin>>opt;
	switch(opt){
		case 1:
			cout<<"Red light"<<endl;
			break;
			case 2:
			cout<<"yellow light"<<endl;
			break;
			case 3:
			cout<<"Green light"<<endl;
			break;
			default:
			cout<<"error";
			break;
	}
	return 0;
}
	
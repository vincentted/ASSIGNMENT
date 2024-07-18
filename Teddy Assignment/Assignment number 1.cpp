#include <iostream>
using namespace std;
int main(){
	int age;
	double balance;
	string CRB;
	int months;
	cout<<"Enter age";
	cin>>age;
		if(age==22){
			cout<<"Enter the balance";
			cin>>balance;
		
			if(balance>=50000){
		cout<<"Check CRB status";
		cin>>CRB;
			
	if("CRB status is good"){
		 	cout<<"Enter number of months spent by the customer";
       	cin>>months;
	

if(months>=6){
			cout<<"Give them a loan";
}
	}
			}
		}	else{
			cout<<"Deny them a loan";
		}
return 0;
}

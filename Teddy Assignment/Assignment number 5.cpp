#include <iostream>
using namespace std;

int main() {
int	opt;
	cout<<"/n 1.Area of a circle:/n 2.Area of a rectangle:/n 3.area of a triangle:/n 4.Quit";
	cout<<"Please select options 1,2,3,4"<<endl;
	cin>>opt;
	switch(opt){
		 case 1:
            cout << "Calculate the area of a circle";
            break;
        case 2:
            cout << "Calculate the area of a rectangle";
            break;
        case 3:
            cout << "Calculate the area of a triangle";
            break;
        default:
            cout << "Quit" << endl;
            break;
    }

    return 0;
}

		
	
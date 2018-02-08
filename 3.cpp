#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
	int i,x,min,y=0;
		cout << "Input x: ";
		cin >> x;
		min=x;
		if(x<=0){
			cout << "N/A";	
				}
		else {
			for(;;){
				cout << "Input x: ";
				cin >> x;
		if(x<=0){
			break;
		}
		min=(x<min)?x:min;
	}
	cout << "Minimum : " << min;	
	}
	
	return 0;
}

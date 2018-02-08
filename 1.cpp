#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	double sum,x;
	for(x=2;x<=222;x+=2){
	sum+=(1/x);	
	}
	
	cout << fixed << setprecision(10) << sum;
	
	return 0;
}

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
	
	double sum,x,y;
	for(x=3,y=6;x<=333;x+=6,y+=6){
	sum+=(pow(x,3)+pow(y,2));	
	}
	
	cout << fixed << setprecision(10) << sum;
	
	return 0;
}

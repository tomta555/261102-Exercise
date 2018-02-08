#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;



int main(){
	//Array 
	int x,burn=100,temp;
	cout << "Input the burner location:";
	cin >> x;
	temp=x;
	for(;;){
	
		if(x<0 or x>=100){
			cout << "Burning completes in " << x/10 << "sec.";
			break;
		}
		cout << "Input the burner location:";
		cin >> x;
		if(x<=temp)
		{
		cout << "The location must be greater than "<< x <<".";
		}else temp=x;

	
	
		
		
		
	}
	






	return 0;
}

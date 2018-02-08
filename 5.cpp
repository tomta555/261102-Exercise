#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void printPattern2(int n){
	
	int i,j;
	if(n<=0){
		cout << "Invalid input \n";
					}
	else {
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(j<=i)cout << "O";
				else cout << "X";
							}
							
			cout << endl;
			}
			
		}
	}

int main(){
	printPattern2(3);
	cout << endl;
	printPattern2(4);
	cout << endl;
	printPattern2(5);
	cout << endl;
	printPattern2(0);
	cout << endl;
	printPattern2(-1);
	return 0;
}

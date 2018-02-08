#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void printPattern1(int n,int m){
	
	int i,j;
	if(n<=0 or m<=0){
		cout << "Invalid input \n";
					}
	else {
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if(i%2!=0){
					if(j%2==0)cout << "X";
					else cout << "O";
				}
				else {
					if(j%2==0)cout << "O";					
					else cout << "X";
				}
			}
			cout << endl;
		}
	}
} 
int main(){
	printPattern1(2,2);
	cout << endl;
	printPattern1(3,5);
	cout << endl;
	printPattern1(5,3);
	cout << endl;
	printPattern1(0,3);
	cout << endl;
	printPattern1(7,-1);
	return 0;
}

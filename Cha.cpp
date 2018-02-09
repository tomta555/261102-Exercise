#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){

	int c;
	float max=-99,n,temp,max2,count=0;
		cout << "Input the burner location:";
		cin >> n;
		temp=n;
		max2=n;
		if(n<50){
			max=(100-n)/10;
		}else if(n==50){
			max=n/10;
		}
		if(n==100){
			cout << "Burning completes in " << n/10 << " sec.";
				}else{
				for(;;){
					cout << "Input the burner location:";
					cin >> n;
					if(n<0||n>100){
						if(max==-99){
							max=max2/10;
							cout << "Burning completes in " << max << " sec.";
							break;
									}
						else {
							cout << "Burning completes in " << max << " sec.";
							break;
							}
									}
					if(n<=temp){
						cout << "The location must be greater than "<< temp <<". \n";
								}
					else if(n>=0&&n<=100&&n>temp) {
						max=(n-temp)/20;
						//max=round((n-temp)/20);
						temp=n;
						if(n==50){
							max=n/10;
								}
						if(n==100){
							cout << "Burning completes in " << max << " sec.";
							break;
									}
												  }
						}			
			}

	return 0;
}

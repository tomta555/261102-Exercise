#include<iostream>
using namespace std;

int main(){
	int x[11]={0,10,20,30,40,50,60,70,80,90,100};
	int y[11]={0,0,0,0,0,0,0,0,0,0,0};
	float max;
	int i,j,num,c=0,z[11],k=0;
		for(;;){
		cout << "Input the burner location:";
		cin >> num;
		for(i=0;i<11;i++){
			if(num==x[i]){
				y[i]=1;
				}
			}
			for(j=0;j<11;j++){
				if(y[i]==1){
					c++;
				}
				else if(y[i]==0){
					z[k]++;
				}
			}
		}
		
		
	
	
	
	
	
	return 0;
}

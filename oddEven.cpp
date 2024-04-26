#include<iostream>
using namespace std;
bool ADD = false;

int main(){
	int n;
	int sum;
	
	cin>>n;
	for(int i=1; i<=n; i++){
		if(i%2==0){
			
			sum += i;
			ADD = true;
			
		}else{
			sum += i;
			ADD = false;
		
		}
	}

	if(ADD){
		cout<<"sum of all odds = "<<sum<<endl;
	}else{
		cout<<"sum of all evens = "<<sum<<endl;
	}
	
}

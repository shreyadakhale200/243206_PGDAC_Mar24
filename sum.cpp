#include<iostream>
using namespace std;

int main(){
	int num , sum;
	cin>>num;
	
	while(num>=0){
		sum += num;
		cin>>num;
	}
	cout<<"sum = "<<sum;
	
}

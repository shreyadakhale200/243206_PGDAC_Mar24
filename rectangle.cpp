#include<iostream>
using namespace std;


class Rectangle{
public:
	int H;
	int W;

	void input(int height, int width){
		H = height;
		W= width;
	}
	int area(){
		return H*W;
	}
		
};

class Circle{
	public:
	int r;
	void radius(int rad){
		r = rad;
	}
	float area(){
		return 3.14*r*r;
	}
};

int main(){
	cout<<"enter the Height & Width  = ";
	int h , w ;
	cin>>h>>w;
	Rectangle r1 ;
	r1.input(h, w);
	cout<<"area of rect = "<<r1.area()<<endl;
	
	float rad;
	cout<<"enter the radius  = ";
	cin>>rad;
	Circle c1;
	c1.radius(rad);
	cout<<"area of circle = "<<c1.area();
	
}

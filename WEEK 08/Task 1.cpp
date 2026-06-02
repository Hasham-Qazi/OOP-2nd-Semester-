#include <iostream>
using namespace std;

class Shape{
	public:
		virtual double Area(){}
};

class Rectangle : public Shape{
	private:
		double length,width;
	public:
		
		Rectangle(double l,double w){
			length = l;
			width = w;
		}
		
		double Area() override{
			return length*width;
		}
};

class Circle : public Shape{
	private:
		double radius;
	public:
		
		Circle (double r){
			radius = r;
		}
		
		double Area() override{
			return 3.14*radius*radius;
		}
};

int main(){
	Shape *s;
	
	Rectangle r(2.0,3.0);
	Circle c(5.0);
	
	s = &r;
	cout<<"Area of Rectangle : "<<s->Area()<<endl;
	s = &c;
	cout<<"Area of Circle : "<<s->Area()<<endl;

	return 0;
}

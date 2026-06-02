#include <iostream>
using namespace std;

struct Student{
	
	string Frist_name;
	string Last_name;
	int Age;
	float Marks;	
	
	void displayStudentInfo(Student student){
		
		cout<<"Student Full Name : "<<student.Frist_name<<" "<<student.Last_name<<endl;
		cout<<"Age : "<<student.Age<<endl;
		cout<<"Marks : "<<student.Marks<<endl;
	}
}s1,s2;

int main(){
	
	//First Student
	s1.Frist_name = "Hasham";
	s1.Last_name = "Qazi";
	s1.Age = 21;
	s1.Marks = 40.5;
	s1.displayStudentInfo(s1);
	
	cout<<endl;
	cout<<"***********************************"<<endl;
	cout<<endl;
	
	//Second Student
	s2.Frist_name = "Ali";
	s2.Last_name = "Raza";
	s2.Age = 23;
	s2.Marks = 67;
	s2.displayStudentInfo(s2);
	
	return 0;
} 

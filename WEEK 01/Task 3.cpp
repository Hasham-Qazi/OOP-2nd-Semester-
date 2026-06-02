#include <iostream>
using namespace std;

struct Student{
	
	string First_name;
	string Last_name;
	int Age;
	float Marks;	
	
	void displayStudentInfo(){
		
		cout<<"Student Full Name : "<<First_name<<" "<<Last_name<<endl;
		cout<<"Age : "<<Age<<endl;
		cout<<"Marks : "<<Marks<<endl;
	}
}s1,s2;

int main(){
	
	//Student 01
	Student *ptr1=&s1;
	ptr1->First_name = "Zeeshan";
	ptr1->Last_name = "Ahmad";
	ptr1->Age = 25;
	ptr1->Marks = 98;
	
	//Student 02
	Student *ptr2=&s2;
	ptr2->First_name = "Muhammad";
	ptr2->Last_name = "Awais";
	ptr2->Age = 30;
	ptr2->Marks = 95;
	
	//Displaying the Record
	cout<<"Record of the Student 01 : "<<endl;
	ptr1->displayStudentInfo();
	
	cout<<"-----------------------------"<<endl;
	
	cout<<"Record of the Student 02 : "<<endl;
	ptr2->displayStudentInfo();
	
return 0;
}

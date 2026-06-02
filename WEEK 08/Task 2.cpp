#include <iostream>
using namespace std;

class Employee{
	public:
		virtual double calculateSalary(){
			cout<<"Base Employee salary calculation called."<<endl;
			return 0;
		}
};

class PermanentEmployee : public Employee{
	private:
		double basicSalary, Bonus;
	public:
		
		PermanentEmployee (double bs, double b){
			basicSalary = bs;
			Bonus = b;
		}
		
		double calculateSalary() override{
			return basicSalary + Bonus;
		}
};

class ContractEmployee : public Employee{
	private:
		double hourlyRate;
		int hoursWorked;
	public:
		
		ContractEmployee(double hr, int hw){
			hourlyRate = hr;
			hoursWorked = hw;
		}
		
		double calculateSalary() override{
			return hourlyRate*hoursWorked;
		}
};

int main(){
	//base class pointer...
	Employee *e;
	
	//derived classes objects...
	PermanentEmployee PR(40000,5000);
	ContractEmployee CE(800,30);
	
	//-----------------Results-----------------	
	e = &PR;
	cout<<"Salary of Permanent Emplyee : Rs."<<e->calculateSalary()<<endl;
	
	//-----------------------------------------
	
	e = &CE;
	cout<<"Salary of a Contract Employee : Rs."<<e->calculateSalary()<<endl;
	
	return 0;
}

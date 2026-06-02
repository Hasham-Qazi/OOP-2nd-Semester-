#include <iostream>
using namespace std;

class Distance{
	private:
		int feet,inches;
	public:
		Distance(int f, int i){
			feet = f;
			inches = i;
		}
		
		bool operator == (Distance d){
			if(feet == d.feet && inches == d.inches){
				return true;
			}
			else{
				return false;
			}
		}
		
};

int main(){
	Distance d1(7,9);
	Distance d2(7,9);
	
	if(d1 == d2){
		cout<<"Both the Distances are Equal"<<endl;
	}
	else{
		cout<<"Both the Distances are Unequal"<<endl;
	}
	
	
	
	
	return 0;
}

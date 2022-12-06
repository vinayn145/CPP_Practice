#include<iostream>
#include<string.h>
using namespace std;

class Calculater{

	public:
	int num1;
	int num2;
	
	void add(){
		int num3= num1+num2;
	cout << "Addition result is "<< num3<< endl;
	}
	void sub(){
		int num3= num1-num2;
	cout << "Subtractresult is "<< num3;
	}
};
int main(){
	Calculater calci;
	calci.num1=3;
	calci.num2=2;
	calci.add();
	calci.sub();

	return 0;
}
	


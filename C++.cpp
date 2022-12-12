#include<iostream>
#include<string.h>
using namespace std;

class Student{
	
	int id;
	string name;
	int age;
	string gender;
	
	void eat(){
	cout << " Student is eating num num\n";
	}
		void sleep(){
	cout << " Student is sleeping gur gur\n";
	}
		void study(){
	cout << " Student is studying\n";
	}
};
int main(){
	Student stud1;
	Student stud2;
	stud1.eat();
	stud1.sleep();
	stud1.study();
	stud2.study();
	return 0;
}
	


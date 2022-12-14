#include<iostream>
#include<string.h>
using namespace std;

class Student{
	
	int id;
	string name;
	int age;
	string gender;
	public:
	void eat(){
	cout << " Student is eating \n";
	}
		void sleep(){
	cout << " Student is sleeping \n";
	}
		void study(){
	cout << " Student is studying\n";
	}
	    void job(){
	cout << "Student is get job";
		}
};
int main(){
	Student stud1;
	Student stud2;
	stud1.eat();
	stud1.sleep();
	stud1.study();
	stud2.study();
	stud2.job();
	return 0;
}
	


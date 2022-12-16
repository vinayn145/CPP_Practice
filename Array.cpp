#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int i,j;
	// Creating integer array
	int array[3][3];
	// Taking input from user and store it in an array
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			cout<< "Enter age of class "<<i<<" Student "<<j<<"\n";
			cin>>array[i][j];
		}
	}
	// Displaying array elements
	cout<<"Array elements are: \n";
		for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			cout<<array[i][j]<<" ";
		}
		cout<<"\n";
	}
}

  	


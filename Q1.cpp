//Q1 - Write a program to print the address of an integer variable whose value is input by the
//user.
#include<iostream>
using namespace std;
int main(){
	int IntValue;
	cout<<"Enter an Integer Value :: ";
	cin>>IntValue;
	cout<<"Adress Of "<<IntValue<<" is ::"<<&IntValue;
	return 0;
	
}

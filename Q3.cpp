//Q3 - Write a function that returns the largest and the smallest number out of 3 given numbers.
//The main function should call this function to get the largest and smallest number and print
//the output.
#include<iostream>
using namespace std;
int largestElement(int *num1,int *num2,int *num3){
    if(*num2>*num1 && *num2>*num3){

          return *num2;
	}
	else if(*num1>*num2 && *num1>*num3){

           return *num1;
	}
	else {
           return *num3;
	}
	
}
int main(){
int n1=100;
int n2=65;
int n3=44;
cout<<"Largest Number is :: "<<largestElement(&n1,&n2,&n3);
	
}

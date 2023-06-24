//Q2 - Write a program to find the product of 2 numbers using pointers
#include<iostream>
using namespace std;
int product(int num1,int num2){
	int *n1;
	int *n2;
	n1=&num1;
	n2=&num2;
    int pro=(*n1)*(*n2);
 return pro;
}

int main(){

cout<<"Product is Equal to :: "<<product(11,4);
return 0;	
}

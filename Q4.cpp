//Q4 - Implement the swap function using pointers.
#include<iostream>
using namespace std;
void Swap(int *num1,int *num2){

int temp=*num1;
*num1=*num2;
*num2=temp;

}

int main(){
	int n1=11;
	int n2=22;
	cout<<"Befor Swaping :: "<<n1 <<" -> "<<n2<<endl;;
Swap(&n1,&n2);
	cout<<"After Swaping :: "<<n1 <<" -> "<<n2<<endl;

return 0;	
}

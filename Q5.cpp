//Q5 - Write a function that returns the first character, last character and the number of
//occurrences of ‘t’ in a string input by user.
#include<iostream>
using namespace std;
void firstLastandCount(char *f,char *l,int *t ,string str,char c){
    *f=str[0];
	*l= str[str.size()-1];
	for(int i=0;i<str.size();i++){
		if(str[i]==c){
		*t=*t+1;
		}
	}
	}

int main(){
string str="twitter";
char findCharacter='t';
char first=-1;
char last=-1;
int t=0;
firstLastandCount(&first,&last,&t,str,findCharacter);
cout<<first<<" "<<last<<" "<<t;
return 0;	
}

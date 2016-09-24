#include<iostream>
using namespace std;

bool isPowerofFour(int number){
	
	if (number <= 0 ) 
		return false; 
	int rem = 0;
	while(number != 1 ){

	   if (number%4 != 0) 
	   	return false;
	   number = number/4;
	}
	return true;
}

int main(){
	int input_number;
	cout<<endl<<"Enter a number"<<endl;
	cin>>input_number;

	bool check_number_pow_four = isPowerofFour(input_number);

	if(check_number_pow_four)
		cout<<endl<<input_number<<" is a power of 4"<<endl;
	else
		cout<<endl<<input_number<<" is not a power of 4"<<endl;
}
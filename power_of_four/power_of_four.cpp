#include<iostream>
using namespace std;

// Using modulo
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

//Using binary operations and loop

bool loopBinaryPowerofFour(int number){
	if (number <= 0 ) 
		return false; 
	int count = 0;
	if((number&(number-1)) != 0)
		return false;
	while(number){
		number = number>>1;
		count++;
		if(count%2 != 0 && (number&1 != 0))
			return false;
	}
	return true;
}

bool onlyBinaryPowerofFour(int number){
	if(number <=0)
		return false;
	return ( number && !(number&(number-1)) && (number&0x55555555) );
}
int main(){
	int input_number;
	cout<<endl<<"Enter a number"<<endl;
	cin>>input_number;

	bool check_number_pow_four = onlyBinaryPowerofFour(input_number);

	if(check_number_pow_four)
		cout<<endl<<input_number<<" is a power of 4"<<endl;
	else
		cout<<endl<<input_number<<" is not a power of 4"<<endl;
}
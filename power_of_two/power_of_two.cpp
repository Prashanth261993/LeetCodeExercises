#include <iostream>
using namespace std;

bool isPowerTwo(int number){
	if (number ==0 || number < 0 ) 
		return false;
    if (number & (number-1))
    	return false;
    else
        return true;
}

int main()
{
	int number;
	cout<<"Enter a number"<<endl;
	cin>>number;

	bool number_is_pow_two = isPowerTwo(number);

	if(number_is_pow_two)
		cout<<endl<<number<<" is a power of two";
	else
		cout<<endl<<number<<" is not a power of two";

	return 0;
}
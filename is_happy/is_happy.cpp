// https://leetcode.com/problems/happy-number/
#include<iostream>
#include<vector>

using namespace std;

bool isHappy(int n){
        if (n == 1 || n == 7) return true;
        if (n < 10) return false;
        int sum = 0;
        while (n) {
            sum += (n % 10) * (n % 10);
            n /= 10;
        }
        return isHappy(sum);
        }
int sum_of_squares_digits( int n){
	int sum = 0,tmp;
	while(n > 0){
		tmp = n%10;
		sum = ( tmp*tmp);
		n = n/10;
	}
	return sum;
}
bool catchup( int n){
	int slow, fast;
    slow = fast = n;
    do{
    	slow = sum_of_squares_digits(slow);
    	fast = sum_of_squares_digits(fast);
    	fast = sum_of_squares_digits(fast);
    }while(slow!=fast);

    if(slow == 1) return true;
    else
    return false;
} 

int main()
{
	int input_number;
	cout<<endl<<"Enter a number:"<<endl;
    cin>>input_number;

    bool isHappy = catchup(input_number);

	if(isHappy){
		cout<<endl<<"The geiven value "<<input_number<<" is very happy"<< endl;
	}
	else{
		cout<<endl<<"The geiven value "<<input_number<<" is really unhappy"<< endl;
		}
    
    
    return 0;
}
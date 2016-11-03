//https://leetcode.com/problems/add-digits/
#include<iostream>
#include<vector>

using namespace std;


        
int addDigits(int num) {
        int rem, sum = 0;
        while(num >0){
            rem = num%10;
            num = num/10;
            sum = sum + rem;
            
            if(num == 0){
                if(sum > 9){
                    num = sum;
                    sum = 0;
                }
            }
        }
        return sum;
    }

int recursiveAddDigits(int num){
    if(num <10){
        return num;
    }
    else{
        return recursiveAddDigits(num/10 + num%10);
    }
}

int onlyModulo(int num){
    return ( (num -1)%9 + 1);
}

int main(){
	int input_number;
	cout<<endl<<"Enter a number:"<<endl;
    cin>>input_number;

    int sum_of_digits = addDigits(input_number);

	
    cout<<endl<<"The sum of digits of "<<input_number<<" is "<<sum_of_digits<< endl;
    
    return 0;
	}

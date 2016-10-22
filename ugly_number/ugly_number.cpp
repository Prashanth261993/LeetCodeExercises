//https://leetcode.com/problems/ugly-number/
#include<iostream>
#include<math.h>

using namespace std;

bool isNumberUgly(int num) {
        if(num <= 0)
            return false;
        if(num <7 )
            return true;
        else
        {
            while(num%2 == 0)
            {
                num = num/2;
            }
            int i = 3;
            
            while( i <= sqrt(num))
            {
                if(i > 5 && num%i == 0)
                    return false;
                    
                while(num%i == 0)
                {
                    num = num/i;
                }
                
                i = i+2;
            }
            
            if(num > 5)
                return false;
        }
        
        return true;
    }

int main(){
	int input_number;
	cout<<endl<<"Enter a number"<<endl;
	cin>>input_number;

    bool isUgly = isNumberUgly(input_number);

	if(isUgly)
        cout<<endl<<input_number<<" is an ugly number."<< endl;
    else
        cout<<endl<<input_number<<" is not an ugly number."<< endl;
	}

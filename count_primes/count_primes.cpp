//https://leetcode.com/problems/count-primes/
#include<iostream>
#include<math.h>
#include<vector>

using namespace std;

 int countPrimes(int n) {
        if(n<=1)
            return 0;
        
        vector<int> prime_numbers;
        prime_numbers.reserve(sqrt(n));
        
        
        if(n%2 == 0)
        {
            prime_numbers.push_back(2);
        }
        
        for(int i = 3; i<= n; i = i+2)
        {
            int temp = i;
            
            for(int j=0; j<prime_numbers.size();j++)
            {
                
                while(temp%prime_numbers[j] == 0)
                {
                    temp = temp/prime_numbers[j]; 
                }
            }
            
            if(temp > 2)
                prime_numbers.push_back(i);
            
        }

           return prime_numbers.size();
        
    }
        

int main(){
	int input_number;
	cout<<endl<<"Enter a number"<<endl;
	cin>>input_number;

    int number_of_primes = countPrimes(input_number);

	
    cout<<endl<<"Number of primes before "<<input_number<<" = "<<number_of_primes<< endl;
    
	}

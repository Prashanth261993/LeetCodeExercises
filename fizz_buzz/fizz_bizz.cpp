#include<iostream>
#include<string>
#include<vector> 

using namespace std;

  vector<string> fizzBuzz(int n) {
        vector<string> returnArray(n);
        for(int i =1; i<=n; i++ )
        {
            string temp; 
            if( i%3 == 0 && i%5 == 0)
                temp = "FizzBuzz";
            else if(i%3 == 0)
                temp = "Fizz";
            else if(i%5 == 0)
                temp = "Buzz";
            else
                temp = to_string(i);
                
            returnArray[i-1] = temp;
        }
        return returnArray;
    }

int main(){
	int input_number;
	cout<<endl<<"Enter a number"<<endl;
	cin>>input_number;

	vector<string> output= fizzBuzz(input_number);

	for(int i = 0; i<input_number; i++){
		cout<<endl<<output[i]<<endl;
	}
}
#include<iostream>
#include<string>
using namespace std;

bool isVowel(char checkChar)
    {
        return checkChar == 'a' || checkChar == 'e' || checkChar == 'i' || checkChar == 'o' || checkChar == 'u' ||
                checkChar == 'A' || checkChar == 'E' || checkChar == 'I' || checkChar == 'O' || checkChar == 'U' ;
    }

string reverseVowels(string str){
	
	string result = str;
    int vowelLast = str.length()-1, vowelFirst = 0;
    while(vowelFirst < vowelLast)
    {
        while (vowelFirst < vowelLast && !isVowel(str[vowelFirst])){
            vowelFirst++;
        }
        while (vowelLast > vowelFirst && !isVowel(str[vowelLast])){
            vowelLast--;
        }
        
        if(isVowel(str[vowelLast]) && isVowel(str[vowelFirst]) && vowelFirst < vowelLast )
        {
            result[vowelFirst] = str[vowelLast];
            result[vowelLast] = str[vowelFirst];
            vowelFirst ++;
            vowelLast --;
        }
    }
    
    return result;
}

int main(){
	string input_string;
	cout<<endl<<"Enter a string"<<endl;
	cin>>input_string;

	string output_string = reverseVowels(input_string);

	cout<<endl<<"Output:  "<<output_string<<endl;
	return 0;
}
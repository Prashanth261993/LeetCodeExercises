//https://leetcode.com/problems/ugly-number/
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

char findDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int i;
        for(i=0;i<s.size();i++){
            if(s[i] != t[i])
            return t[i];
        }
        return t[i];
    }

char findDifferenceXOR(string s, string t){
    int i,result = 0;
        for(i=0;i<s.size();i++){
            result = result ^ (int)s[i] ^ (int)t[i];
        }
        result = result ^ (int)t[i];
        return (char)result;
}

int main(){
	string string1, string2;
	cout<<endl<<"Enter a string"<<endl;
	cin>>string1;
    cout<<endl<<"Enter another string"<<endl;
    cin>>string2;
    char result = findDifference(string1,string2);

	cout<<endl<<"The difference is: "<<result<<endl;
    return 0;
	}

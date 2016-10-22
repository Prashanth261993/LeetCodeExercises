//https://leetcode.com/problems/single-number/
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int singleNumber(vector<int>& nums) {
        if(nums.size() == 1)
        return nums[0];
        sort(nums.begin(),nums.end());
        int i = 0;
        for(i = 0; i< nums.size();i = i+2)
        {
            if(i == nums.size() - 1)
            return nums[i];
            if(nums[i] != nums[i+1])
            return nums[i];
        }
        
        return nums[i];
}
        
int singleNumberXOR(vector<int> &nums){
    int result = 0;
    for(int i = 0;i< nums.size(); i++)
    {
        result = result ^ nums[i];
    }
    return result;
}

int main(){
	vector<int> input_number;
    input_number.reserve(10);
	cout<<endl<<"Enter elements of array:"<<endl;
    
    char should_continue = 'n';
	do{

        int temp;
        cin>>temp;
        input_number.push_back(temp);

        cout<<endl<<" Press y to enter more elements of the array:  ";
        cin>>should_continue;
    }while(should_continue == 'y' || should_continue == 'Y');

    int single_number = singleNumberXOR(input_number);

	
    cout<<endl<<"The single number is"<<single_number<< endl;
    
    return 0;
	}

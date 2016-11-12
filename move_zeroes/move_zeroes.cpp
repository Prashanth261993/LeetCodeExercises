//https://leetcode.com/problems/ugly-number/
#include<iostream>
#include<math.h>
#include<vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
        
        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i] == 0)
            {
                int j=i+1;
                while((nums[j] == 0 && j<nums.size())){
                    j++;
                }
                if(j<nums.size()){
                    nums[i] = nums[j];
                    nums[j] = 0;
                }
                else{
                    break;
                }
                
            }
        }
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

    moveZeroes(input_number);

	for(int i = 0; i< input_number.size();i++)
    {
        cout<<" "<<input_number[i]<< " ";
    }
    return 0;
	}

#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums) {
        vector<int> hash;
        int i=0;
        hash.push_back(nums[0]);
        while(i<nums.size()-1)
        {
            if(nums[i]!=nums[i+1])
            {
                hash.push_back(nums[i+1]);
            }
            i++;
        }
        nums = hash;
        return hash.size();
    }
int main()
{
    removeDuplicates(vector<int> v);
    return 0;
}
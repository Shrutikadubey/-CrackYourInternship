// Problem : Move Zeroes
// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// SOLUTION
//approach->travarse through the array  and keep another array  and then push a non zero elment and 
//place a counter as well  to counrt the zero value and then push that no. of zero in new array at the end
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        if(n==0||n==1)
            return;
        
        int left=0,right=0;
        int temp;
        //rearrangement 
        while(right<n){
            if(nums[right]==0)
                ++right;
            else
            {
                temp= nums[left];
                nums[left]=nums[right];
                nums[right]=temp;
                ++left;
                ++right;
            }
        }
    }
};

//problem statement-> Remove Duplicates from Sorted Array
//Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

//solutions
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n= nums.size();
        int i=0,j=1;
        while(j<n){
            if (nums[i]!=nums[j]){ //got a unique element
                i++;
                nums[i]=nums[j];
                
            }
            j++;//To find unique elements
        }
        return i+1;
    }
};

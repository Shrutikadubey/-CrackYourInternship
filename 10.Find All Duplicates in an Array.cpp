//problem:Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.You must write an algorithm that runs in O(n) time and uses only constant extra space.
//solution:
int n=nums.size();
        vector <int> result;
        for (int i=0;i<n;i++){
            int num=abs(nums[i]);
            int idx=num-1;
            if(nums[idx]<0){
                result.push_back(num);
            }else{
                nums[idx]*=-1;
            }
           
        }
         return result;

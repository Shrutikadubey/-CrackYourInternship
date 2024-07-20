//Problem : Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target. You may assume that each input would have exactly one solution, and you may not use the same element twice. You can return the answer in any order.

// Solution :
int n=nums.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int rem=target -nums[i];
            if(mp.find(rem)!=mp.end()){
                return {mp[rem],i};
            }
            mp[nums[i]]=i;
        }
        return {};

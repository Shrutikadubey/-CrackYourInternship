//problem:Given an integer array nums and an integer k, return the number of non-empty subarrays that have a sum divisible by k.A subarray is a contiguous part of an array.

//solution:
int count=0;
        unordered_map<int,int>mp;
        int sum=0;
        mp[0]++;
        for(auto x:nums){
            sum+=x;
            if (mp[(sum%k+k)%k]>0){
                count+=mp[(sum%k+k)%k];
            }
            mp[(sum%k+k)%k]++;
        }
        return count;

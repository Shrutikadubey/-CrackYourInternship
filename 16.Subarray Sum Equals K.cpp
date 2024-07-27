//probelm:
//approach: brute forch solution is generate all the subarray and see how many are giving value sum k so the t.c -o(n^3)
//optimal solution is using prefix sum 
//solution:
map <int,int> mp;
        mp[0]=1;
        int prefsum=0,count=0;
        for(int i=0;i<nums.size();i++){
        prefsum+=nums[i];
        int remove=prefsum-k;
        count+=mp[remove];
        mp[prefsum]+=1;
    }
    return count;
        
  

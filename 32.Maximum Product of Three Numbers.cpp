//problem:Given an integer array nums, find three numbers whose product is maximum and return the maximum product.

 //solution:
sort(nums.begin(), nums.end());
        int n = nums.size();
        int product1 = nums[n-1] * nums[n-2] * nums[n-3];
        int product2 = nums[0] * nums[1] * nums[n-1];
        return max(product1, product2);

//problem :Given an integer array nums, return the number of reverse pairs in the array.
//solution:
int n = nums.size();
        int res = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] > 2 * nums[j]) {
                    res++;
                }
            }
        }
        return res;

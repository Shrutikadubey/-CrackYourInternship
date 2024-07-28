//problem-You are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.
//Return true if you can reach the last index, or false otherwise.
//solution:
int maxReachable = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i > maxReachable) {
                return false;
            }
            maxReachable = max(maxReachable, i + nums[i]);
        }
        return true;

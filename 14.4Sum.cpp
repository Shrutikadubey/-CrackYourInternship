//problem:Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:0 <= a, b, c, d < na, b, c, and d are distinct.
//nums[a] + nums[b] + nums[c] + nums[d] == target

//approach:1 - brute force 4 loops for a, b, c, d and taking sum of all 4 elements and checking if it is equal to target
// 2 - hashset - 3 loops for a, b, c and taking sum of a, b, c and checking if target - sum is in hashset
// 3- sorting the given array, and then using 3 loops for a, b, c and using two pointer approach for d

//solution:

std::vector<std::vector<int>> result;
    std::sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        for (int j = i + 1; j < nums.size(); j++) {
            if (j != i + 1 && nums[j] == nums[j - 1]) continue;
            int k = j + 1, l = nums.size() - 1;
            while (k < l) {
                int sum = nums[i] + nums[j] + nums[k] + nums[l];
                if (sum == target) {
                    result.push_back({nums[i], nums[j], nums[k], nums[l]});
                    k++;
                    l--;
                    while (k < l && nums[k] == nums[k - 1]) k++;
                    while (k < l && nums[l] == nums[l + 1]) l--;
                } else if (sum < target) {
                    k++;
                } else {
                    l--;
                }
            }
        }
    }
    return result;

//problem:Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
//Notice that the solution set must not contain duplicate triplets.

//approach: brute force approach is pick 2 elements and try to add them and pick new element and sum all the three whose sum is zero but t.c -o(n^3)
//approach2: sort an array then we fix one value in other elemnt take two pointer approach and make triplet which give sum as zero repeat same process so we 
//have to find unique triplet we use hash fit. then we get ans T.C: o(n^2)

//solution:
std::vector<std::vector<int>> ans;
    if (nums.size() < 3) return ans;
    std::sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > 0) break;
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        int start = i + 1;
        int end = nums.size() - 1;
        while (start < end) {
            int sum = nums[i] + nums[start] + nums[end];
            if (sum == 0) {
                ans.push_back({nums[i], nums[start], nums[end]});
                start += 1;
                end -= 1;
                while (start < end && nums[start] == nums[start - 1]) start += 1;
                while (start < end && nums[end] == nums[end + 1]) end -= 1;
            } else if (sum < 0) start += 1;
            else if (sum > 0) end -= 1;
        }
    }
    return ans;

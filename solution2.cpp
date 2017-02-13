//
// Created by 王青龙 on 13/02/2017.
//

#include "solution2.h"

std::vector<std::vector<int>> Solution2::permuteUnique(std::vector<int> &nums) {
    std::sort(nums.begin(), nums.end());
    std::vector<std::vector<int>> res;
    permuteUniqueRecursive(res, 0, nums);
    return res;
}

void Solution2::permuteUniqueRecursive(std::vector<std::vector<int>> &res, int begin, std::vector<int> nums) {
    if (begin >= nums.size()) {
        res.push_back(nums);
    } else {
        for (int i = begin; i < nums.size(); ++i) {
            if (i != begin && nums[i] == nums[begin]) {
                continue;
            } else {
                std::swap(nums[i], nums[begin]);
                permuteUniqueRecursive(res, begin + 1, nums);
            }
        }
    }
}



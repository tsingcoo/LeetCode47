//
// Created by 王青龙 on 09/02/2017.
//

#include "solution.h"

std::vector<std::vector<int>> Solution::permuteUnique(std::vector<int> &nums) {
    std::vector<std::vector<int>> result;
    std::sort(nums.begin(), nums.end());
    permuteUniqueRecursive(nums, 0, result);
    return result;
}

void Solution::permuteUniqueRecursive(std::vector<int> nums, int begin, std::vector<std::vector<int>> &result) {
    if(begin >= nums.size()){
        result.push_back(nums);
    } else{
        for(int i = begin; i<nums.size(); ++i){
            if(i!=begin && nums[i]==nums[begin]){
                continue;
            } else{
                std::swap(nums[i], nums[begin]);
                permuteUniqueRecursive(nums, begin+1, result);
            }

        }

    }
}

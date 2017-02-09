//
// Created by 王青龙 on 09/02/2017.
//

#ifndef LEETCODE47_SOLUTION_H
#define LEETCODE47_SOLUTION_H

#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> permuteUnique(std::vector<int> &nums);

    void
    permuteUniqueRecursive(std::vector<int> nums, int begin, std::vector<std::vector<int>> &result);//注意这里的nums采用传值方式
};

#endif //LEETCODE47_SOLUTION_H

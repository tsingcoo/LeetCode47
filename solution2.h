//
// Created by 王青龙 on 13/02/2017.
//

#ifndef LEETCODE47_SOLUTION2_H
#define LEETCODE47_SOLUTION2_H

#include <vector>

class Solution2 {
public:
    std::vector<std::vector<int>> permuteUnique(std::vector<int> &nums);

    void permuteUniqueRecursive(std::vector<std::vector<int>> &res, int begin, std::vector<int> nums);
};

#endif //LEETCODE47_SOLUTION2_H

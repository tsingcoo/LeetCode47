#include <iostream>
#include "solution.h"
#include "solution2.h"
int main() {
    Solution2 s;
    std::vector<int> arr = {1,1,2,2};
    std::vector<std::vector<int>> result;
    result = s.permuteUnique(arr);
    for(auto i = result.begin(); i != result.end(); ++i){
        for(auto j = i->begin(); j != i->end(); ++j){
            std::cout<<*j<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}
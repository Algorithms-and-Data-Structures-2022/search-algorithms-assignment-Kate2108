#include "assignment/two_sum.hpp"  // find_elements

namespace assignment {

  std::optional<std::pair<int, int>> two_sum(const std::vector<int>& data, int sum) {

    // Tips: для создания пары (pair) используйте функцию std::make_pair

    int leftIndex = 0;
    int rightIndex = static_cast<int>(data.size()) - 1;
    for(int i = 0; i < data.size(); i++){
        while(leftIndex < rightIndex && rightIndex < data.size()){
            if (data[leftIndex] + data[rightIndex] == sum){
                return std::make_pair(leftIndex, rightIndex);
            }
            if  (data[leftIndex] + data[rightIndex] > sum){
                rightIndex--;
            }
            else { leftIndex++; }
        }
    }
    return std::nullopt;
  }

}  // namespace assignment
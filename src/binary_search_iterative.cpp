#include "assignment/binary_search_iterative.hpp"

namespace assignment {

  std::optional<int> BinarySearchIterative::Search(const std::vector<int>& arr, int search_elem) const {

    // Tips:
    // 1. Заведите две переменные: (а) индекс левой границы и (б) индекс правой границы.
    // 2. Поиск ведется пока индекс левой границы не превысил индекс правой.
    // 3. Каждую итерацию вычисляйте индекс середины внутри области, задаваемой индексами левой и правой границы.
    // 4. Рассмотрите 3 случая:
    //    1) Целевой элемент равен элементу посередине.
    //    2) Целевой элемент меньше элемента посередине (область поиска сокращается).
    //    3) Целевой элемент больше элемента посередине (область поиска сокращается).

    int leftIndex = 0;
    int rightIndex = static_cast<int>(arr.size()) - 1;

    while(leftIndex <= rightIndex) {
        int middle = (leftIndex + rightIndex)/2;
        if (arr[middle] == search_elem){
            return middle;
      }
        else if (search_elem < arr[middle]){
            rightIndex = middle - 1 ;
      }
        else {
            leftIndex = middle + 1;
      }
    }
    return std::nullopt;
  }
}

// namespace assignment
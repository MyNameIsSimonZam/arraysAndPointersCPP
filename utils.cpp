#include "utils.h"

void print_vector(const std::vector<int>& v) {
  for (int i = 0; i < v.size(); ++i) {
    std::cout << v[i] << " ";
  }
}

void fill_vector(std::vector<int>& v) {
  for (int i = 0; i < v.size(); ++i) {
    int insert_number;
    std::cout << "Enter the" << i + 1 << "vector element:";
    std::cin >> insert_number;
    v[i] = insert_number;
  };
}

void fill_vector(std::vector<float>& v) {
  for (int i = 0; i < v.size(); ++i) {
    float insert_number;
    std::cout << "Enter the" << i + 1 << "vector element:";
    std::cin >> insert_number;
    v[i] = insert_number;
  };
}
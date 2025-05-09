#include "utils.h"
#include "vector"

void print_vector(const std::vector<int>& v) {
  for (int i = 0; i < v.size(); ++i) {
    std::cout << v[i] << " ";
  }
}

void fill_vector(std::vector<int>& v) {
  for (int i = 0; i < v.size(); ++i) {
    int insert_number;
    std::cout << "Enter the " << i + 1 << " vector element: ";
    std::cin >> insert_number;
    v[i] = insert_number;
  };
}

void fill_vector(std::vector<float>& v) {
  for (int i = 0; i < v.size(); ++i) {
    float insert_number;
    std::cout << "Enter the " << i + 1 << " vector element: ";
    std::cin >> insert_number;
    v[i] = insert_number;
  };
}

void push_back_custom(std::vector<int>& v, int value) {
  std::vector<int> new_vector(v.size() + 1);

  for (int i = 0; i < v.size(); ++i)
    new_vector[i] = v[i];

  new_vector[v.size()] = value;
  v = new_vector;
}

void add_to_position(std::vector<int>& v, int value, int position) {
  std::vector<int> new_vector(v.size() + 1);

  for (int i = 0; i <= v.size(); ++i) {
    if (position - 1 == i) new_vector[i] = value;
    else if (position - 1 > i) new_vector[i] = v[i];
    else if (position - 1 < i) new_vector[i] = v[i - 1];
  }

  v = new_vector;
}

void delete_position(std::vector<int>& v, int position) {

  for (int i = 0; i < v.size() - 1; ++i) {
    if (i < position) v[i] = v[i];
    if (i >= position) v[i] = v[i + 1];
  }
  v.resize(v.size() - 1);
}


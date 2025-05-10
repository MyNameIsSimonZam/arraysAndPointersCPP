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

void ring_buffer(std::vector<int>& rb) {

  if (rb.capacity() == 0) {
    int cap;
    std::cout << "Enter the capacity ";
    std::cin >> cap;
    rb.resize(cap);
  }

  int input_number = 0;
  int head = 0;
  int size = 0;

  while (input_number != -1) {
    std::cout << "Input number: ";
    std::cin >> input_number;
    if (input_number != -1) {
      rb[head] = input_number;
      ++size;
      head = (head + 1) % rb.size();
    }
  };
  if (size >= rb.size()) {
    for (int i = 0; i < rb.size(); ++i) {
      std::cout << rb[head] << " ";
      head = (head + 1) % rb.size();
    }
  }
  else
    for (int i = 0; i < head; ++i) {
      std::cout << rb[i] << " ";
    }
}

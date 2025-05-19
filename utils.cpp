#include "utils.h"
#include "vector"

void print_vector(const std::vector<int>& v) {
  for (int i = 0; i < v.size(); ++i) {
    std::cout << v[i] << " ";
  }
}

void print_vector(const std::vector<float>& v) {
  for (int i = 0; i < v.size(); ++i) {
    std::cout << v[i] << " ";
  }
}

void print_vector_two_dementional(const std::vector<std::vector<bool>>& v) {
  for (int i = 0; i < v.size(); ++i) {
    for (int j = 0; j < v[i].size(); ++j) {
      std::cout << v[i][j] << " ";
    }
    std::cout << "\n";
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

void fill_vector_two_demensional(std::vector<std::vector<float>>& v) {
  for (int i = 0; i < v.size(); ++i) {
    for (int j = 0; j < v.size(); ++j) {
      std::cout << "Enter the " << j + 1 << " vector element for " << i + 1 << " row: ";
      std::cin >> v[i][j];
    }
  }
}

void change_pointers(int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void revers_array_with_pointers(int* a, int size) {
  for (int i = 0; i < size / 2; ++i) {
    int temp = *(a + i);
    *(a + i) = a[size - i - 1];
    a[size - i - 1] = temp;
  }
}

void print_array(const int* a, int size) {
  for (int i = 0; i < size; ++i) {
    std::cout << *(a + i) << " ";
  }
}

bool substr(const char* a, const char* b) {
  int i = 0, j = 0;

  while (*(a + i) != '\0') {
    int j = 0;
    if (*(a + i) == *(b + j))
      while (*(a + i + j) != '\0' && *(b + j) != '\0') {
        if (*(a + i + j) != *(b + j)) break;

        ++j;
        if (*(b + j) == '\0') return true;
      }
    ++i;
  }

  return false;
}

void swapvec(std::vector<int>& a, int* b) {
  for (int i = 0; i < a.size(); ++i) {
    int temp = a[i];
    a[i] = *(b + i);
    *(b + i) = temp;
  }
}

int rabbit_way(int n, int k) {
  int result = 0;
  if (n == 0) {
    ++result;
    return result;
  }
  else {
    for (int i = 1; i <= k; ++i) {
      if (n - i >= 0)
        result += rabbit_way(n - i, k);
    }
  }
  return result;
}

void evendigits(long long& n, int& ans) {

}
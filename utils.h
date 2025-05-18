#pragma once
#include <vector>
#include <iostream>

void print_vector(const std::vector<int>& v);
void print_vector(const std::vector<float>& v);
void fill_vector(std::vector<int>& v);
void fill_vector(std::vector<float>& v);
void push_back_custom(std::vector<int>& v, int adding_number);
void add_to_position(std::vector<int>& v, int value, int position);
void delete_position(std::vector<int>& v, int position);
void ring_buffer(std::vector<int>& rb);
void fill_vector_two_demensional(std::vector<std::vector<float>>& v);
void print_vector_two_dementional(const std::vector<std::vector<bool>>& v);
void change_pointers(int* a, int* b);
void revers_array_with_pointers(int* a, int size);
void print_array(const int* a, int size);
bool substr(const char* a, const char* b);
void swapvec(std::vector<int>& a, int* b);


  
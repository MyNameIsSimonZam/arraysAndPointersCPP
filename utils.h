#pragma once
#include <vector>
#include <iostream>

void print_vector(const std::vector<int>& v);
void fill_vector(std::vector<int>& v);
void fill_vector(std::vector<float>& v);
void push_back_custom(std::vector<int>& v, int adding_number);
void add_to_position(std::vector<int>& v, int value, int position);
void delete_position(std::vector<int>& v, int position);
void ring_buffer(std::vector<int>& rb);

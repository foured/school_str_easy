#ifndef STR_EASY_H
#define STR_EASY_H

#include <iostream>
#include <string>

std::string itc_hello_str(std::string name);
long long itc_len(std::string line);
void itc_print_copy_str(std::string str, int n);
void itc_first_end_three(std::string str);
int itc_count_char_in_str(char ch, std::string str);
std::string itc_even_place(std::string str);
double itc_percent_lower_uppercase(std::string str);
std::string itc_reverse_str(std::string str);
std::string itc_slice_str(std::string str, int start, int end);
bool itc_equal_reverse(std::string str);
std::string itc_cmp_str(std::string str1, std::string str2, int num);
int itc_find_str(std::string str1, std::string str2);
std::string itc_three_str(std::string str1, std::string str2, std::string str3);
int itc_max_char_on_end(std::string str);

#endif

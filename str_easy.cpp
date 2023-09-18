#include "str_easy.h"

std::string itc_hello_str(std::string name) {
	return "Hello, " + name;
}
long long itc_len(std::string line) {
	int t = 0;
	for (int i = 0; line[i] != '\0'; i++) { t++; }
	return t;
}
void itc_print_copy_str(std::string str, int n) {
	for (int i = 0; i < n; i++) {
		std::cout << str << std::endl;
	}
}
void itc_first_end_three(std::string str) {
	if (itc_len(str) <= 5) {
		std::cout << str[0] * itc_len(str) << std::endl;
	}
	else {
		std::cout << str[0] << str[1] << str[2] << str[itc_len(str) - 3] << str[itc_len(str) - 2] << str[itc_len(str) - 1] << std::endl;
	}
}
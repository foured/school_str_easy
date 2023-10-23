#include "easy_str.h"

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
	int len = itc_len(str);
	if (len <= 5) {
		for (int i = 0; i < len; i++) {
			std::cout << str[0];
		}
	}
	else {
		std::cout << str[0] << str[1] << str[2] << str[len - 3] << str[len - 2] << str[len - 1] << std::endl;
	}
}
int itc_count_char_in_str(char ch, std::string str) {
	int res = 0;
	for (int i = 0, len = itc_len(str); i < len; i++) {
		if (str[i] == ch) res++;
	}
	return res;
}
std::string itc_even_place(std::string str) {
	std::string res = "";
	for (int i = 0, len = itc_len(str); i < len; i++) {
		if ((int)str[i] % 2 == 0) res += str[i];
	}
	if (res == "") return "-1";
	return res;
}
double itc_percent_lower_uppercase(std::string str) {
	double u = 0, nu = 0;
	for (int i = 0, len = itc_len(str); i < len; i++) {
		char cc = str[i];
		if (cc >= 'A' && cc <= 'Z')
			u++;
		else if (cc >= 'a' && cc <= 'z')
			nu++;
	}
	return nu / u;
}
std::string itc_reverse_str(std::string str) {
	std::string res = "";
	for (int i = 0, len = itc_len(str) - 1; i <= len; i++) {
		res += str[len - i];
	}
	return res;
}
std::string itc_slice_str(std::string str, int start, int end) {
	std::string res = "";

	if (end < start) {
		res = str;
	}
	else {
		int len = itc_len(str);
		if (end > len) end = len - 1;

		for (int i = start; i <= end; i++) {
			res += str[i];
		}
	}

	return res;
}
bool itc_equal_reverse(std::string str) {
	int len = itc_len(str) - 1;
	int halfLen = (len + (len % 2)) / 2;

	std::string firstPart = "";
	std::string secondPart = "";

	for (int i = 0; i < halfLen; i++) {
		firstPart += str[i];
		secondPart += str[len - i];
	}

	return firstPart == secondPart;
}
std::string itc_cmp_str(std::string str1, std::string str2, int num) {
	std::string res = "";
	int len = itc_len(str1);
	if (str2 != "") {
		std::string res1 = "";
		std::string res2 = "";

		for (int i = 0; i < num; i++) {
			res1 += str1[i];
			if(num + i < len)
				res2 += str1[num + i];
		}
		res = res1 + str2 + res2;
	}
	else {
		res = str1;
	}

	return res;
}
int itc_find_str(std::string str1, std::string str2) {
	if (itc_len(str1) < itc_len(str2)) return -1;

	for (int i = 0, len1 = itc_len(str1); i < len1; i++) {
		bool isFirstEntry = true;
		for (int j = 0, len2 = itc_len(str2); j < len2; j++) {
			if (str1[i + j] != str2[j]) {
				isFirstEntry = false;
				break;
			}
		}
		if (isFirstEntry) return i;
	}
	return -1;
}
std::string itc_three_str(std::string str1, std::string str2, std::string str3) {
	int idx = itc_find_str(str1, str2);

	if (itc_find_str(str1, str2) == -1)
		return str1;

	std::string res1 = "";
	std::string res2 = "";
	std::string res = "";
	for (int i = 0, len1 = itc_len(str1), len2 = itc_len(str2); i < len1; i++) {
		if (i < idx) {
			res1 += str1[i];
		}
		else if (i >= idx + len2) {
			res2 += str1[i];
		}
	}
	res = res1 + str3 + res2;
	return itc_three_str(res, str2, str3);
}

int itc_max_char_on_end(std::string str) {
	int maxNumSequence = 0;
	int temp_maxNumSequence = 0;
	for (int i = 0, len = itc_len(str); i < len; i++) {
		char cc = str[i];
		if (cc >= '0' && cc <= '9') {
			temp_maxNumSequence++;
		}
		else {
			if (temp_maxNumSequence > maxNumSequence)
				maxNumSequence = temp_maxNumSequence;
			temp_maxNumSequence = 0;
		}
	}
	return maxNumSequence;
}

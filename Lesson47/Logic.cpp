#include <stdlib.h>
#include <string>

using namespace std;

string convert(int** prices, int count, string* names, int* cars) {
	string s = "";

	for (int i = 0; i < count; i++) {
		s += *(names + i) + ": ";
		for (int j = 0; j < *(cars + i); j++) {
			s += to_string(*(*(prices + i) + j)) + " ";
		}
		s += "\n";
	}
	return s;
}

void random_init_price(int** prices, int count, int* cars) {
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < *(cars + i); j++) {
			*(*(prices + i) + j) = rand() % 1000 * 100;
		}
	}
}
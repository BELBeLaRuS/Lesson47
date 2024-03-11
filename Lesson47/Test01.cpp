#include <iostream>
#include <string>
using namespace std;

void random_init_price(int** prices, int count, int* cars);
string convert(int** prices, int count, string* names, int* cars);
int find_index_of_rich_showroom(int** prices, int count, int* cars);

int main () {

	int count_showroom = 4;

	do {
		cout << "Input count of showroom: ";
		cin >> count_showroom;
	} while (count_showroom <= 0);

	string* names = new string[count_showroom];
		

	int* cars = new int[count_showroom];

	for (int i = 0; i < count_showroom; i++) {
		do {
			system("cls");
			cout << "Input name of showroom: ";
			cin >> *(names + i);
			cout << "Count of cars in " << *(names + i) << ": ";
			cin >> *(cars + i);
		}while (*(cars + i) <= 0);

	}

	int** prices = new int* [count_showroom];

	for (int i = 0; i < count_showroom; i++) {
		*(prices + i) = new int[*(cars + i)];
	}

	random_init_price(prices, count_showroom, cars);
	cout << convert(prices, count_showroom, names, cars) << endl;
	cout << "The rich showroom is " 
	<< *(names + find_index_of_rich_showroom(prices, count_showroom, cars)) << endl;

	for (int i = 0; i < count_showroom; i++) {
		delete[] *(prices + i);
	}

	delete[] prices;
	delete[] cars;


	return 0;
}

int sum_prices_of_showroom(int* prices, int count_of_cars) {
	int sum = 0;


	for (int i = 0; i < count_of_cars; i++) {
		sum += *(prices + i);
	}

	return sum;
}

int find_index_of_rich_showroom(int** prices, int count, int* cars) {
	int max_index = 0;

	for (int i = 0; i < count; i++) {
		int total = sum_prices_of_showroom(*(prices + i), *(cars + i));
		
		if (total > sum_prices_of_showroom(*(prices + max_index), *(cars + max_index))) {
			max_index = i;

		}
	}


	return max_index;
}
#include <iostream>

template <class T>
T* Izvlechenie(T* arr, int size) {
	T tmp;
	for (int i = 0; i < size - 1; i++) {
		int min_j = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[j] < arr[min_j])
				min_j = j;
		}
		tmp = arr[i];
		arr[i] = arr[min_j];
		arr[min_j] = tmp;
	}
	return arr;
}

int main()
{
	const int size = 6;
	int arr[size] = { 4, 5, 2, 9, 6, 1 };

	for (int k = 0; k < size; k++) {
		std::cout << arr[k] << " ";
	}
	std::cout << std::endl;

	Izvlechenie(arr, size);

	for (int n = 0; n < size; n++) {
		std::cout << arr[n] << " ";
	}
}

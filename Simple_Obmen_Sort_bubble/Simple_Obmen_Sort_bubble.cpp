#include <iostream>

template <class T>
T* Bubble(T* arr, int size) {
	T tmp;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
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

	Bubble(arr, size);

	for (int n = 0; n < size; n++) {
		std::cout << arr[n] << " ";
	}
}

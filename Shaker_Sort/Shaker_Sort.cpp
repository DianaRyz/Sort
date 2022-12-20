#include <iostream>

template <class T>
T* Shaker(T* arr, int size) {
	int left = 0;
	int right = size - 1;
	T tmp;
	T last; //последний элемент 

	while (left < right) {
		last = -1;
		for (int i = left; i < right; i++) {
			if (arr[i] > arr[i + 1]) {
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
				last = i;
			}
		}
		last = size;
		for (int i = right - 1; i >= left; i--) {
			if (arr[i] > arr[i + 1]) {
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
				last = i;
			}
		}

		left = last + 1;
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

	Shaker(arr, size);

	for (int n = 0; n < size; n++) {
		std::cout << arr[n] << " ";
	}
}

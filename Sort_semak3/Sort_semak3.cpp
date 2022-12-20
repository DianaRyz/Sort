#include <iostream>

template <class T>
T* Simple(T* arr, int size) {
	T key;
	for (int i = 1; i < size; i++) {
		key = arr[i]; 
		for (int j = i - 1; j >= 0; j--) {
			while (arr[j] > key) {
				arr[i] = arr[j];
				arr[j] = key;
				j--;
				i--;
			}
			break;
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

	Simple(arr, size);

	for (int n = 0; n < size; n++) {
		std::cout << arr[n] << " ";
	}
}

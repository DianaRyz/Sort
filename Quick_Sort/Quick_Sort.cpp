#include <iostream>

template <class T>
void quickSort(T* arr, int left, int right) {
	T tmp;
	if (left > right) return;
	T key = arr[(left + right) / 2]; //опорный элемент
	int i = left;
	int j = right;
	while (i <= j) {
		while (arr[i] < key) i++;
		while (arr[j] > key) j--;
		if (i <= j) {
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}
	}
	quickSort(arr, left, j);
	quickSort(arr, i, right);

}

int main()
{
	const int size = 6;
	int arr[size] = { 4, 5, 2, 9, 6, 1 };

	for (int k = 0; k < size; k++) {
		std::cout << arr[k] << " ";
	}
	std::cout << std::endl;

	quickSort(arr, 0, size - 1);

	for (int n = 0; n < size; n++) {
		std::cout << arr[n] << " ";
	}
}

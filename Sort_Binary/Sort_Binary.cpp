#include <iostream>                       

template <class T>
T* Binary(T* arr, int size) {
	T key;
	int left, right, mid;
	for (int i = 1; i < size; i++) {
		if (arr[i - 1] > arr[i]) {
			key = arr[i]; // x – включаемый элемент
			left = 0; // левая граница отсортированной части массива
			right = i - 1; // правая граница отсортированной части массива
			while (left <= right) {
				mid = (left + right) / 2; // mid – новая "середина" последовательности
				if (arr[mid] < key) 
					left = mid + 1;
				else 
					right = mid - 1;
			} // поиск ведется до тех пор, пока левая граница не окажется правее правой границы
			for (int j = i - 1; j >= left; j--) 
				arr[j + 1] = arr[j];

			arr[left] = key;

		}

	}
	
	return arr;
}


int main()
{
	const int size = 6;
	int arr[size] = { 1, 2, 3, 9, 6, 0 };

	for (int k = 0; k < size; k++) {
		std::cout << arr[k] << " ";
	}
	std::cout << std::endl;

	Binary(arr, size);

	for (int n = 0; n < size; n++) {
		std::cout << arr[n] << " ";
	}
}

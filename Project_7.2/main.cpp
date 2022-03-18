#include<iostream>
using namespace std;

template<typename T>
void Show(T arr, int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}
	cout << endl;
}

template<typename T1>
void Sort_bubble_method(T1 arr[], int n) {
	
	T1 s;

	for (int i = 0; i < n - 1; i++) {
		for (int j = 1; j < n; j++) {
			if (arr[j] < arr[j - 1]) {
				s = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = s;
			}
		}
	}
	Show(arr, n);
}

int main() {
	setlocale(0, "rus");

	int arr[7] = { 1,2,1,5,3,7,1 };
	char arr_char[5] = { 'S','A','D','B','A' };
	Sort_bubble_method(arr_char, 5);
	Sort_bubble_method(arr, 7);


	cin.get();
	return 0;
}
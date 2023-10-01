#include <iostream>

using namespace std;

const int ARR_LENGHT = 3;

int recursionSumArr(int arr[ARR_LENGHT], int i);

int main() {
	int arr[ARR_LENGHT], sum;

	cout << "Input arr value:" << endl;
	for (int i = 0; i < ARR_LENGHT; i++) {
		cin >> arr[i];
	}

	sum = recursionSumArr(arr, 0);

	cout << "Sum arr: " << sum << endl;
}

int recursionSumArr(int arr[ARR_LENGHT], int i) {
	if (i == (ARR_LENGHT - 1)) {
		return arr[i];
	} else {
		return arr[i] + recursionSumArr(arr, i + 1);
	}
}
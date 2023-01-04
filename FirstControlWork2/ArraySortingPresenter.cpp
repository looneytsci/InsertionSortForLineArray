#pragma once

using namespace System;

public ref class ArraySortingPresenter {
	public:
		int ArrayLength;
		double minValue;
		double maxValue;
		int* mainArray;
	
		System::Void ArraySortingPresenter::createData() {
			Random^ r = gcnew Random;

			mainArray = new int[ArrayLength];

			for (int i = 0; i < ArrayLength; i++) {
				mainArray[i] = Convert::ToInt32(minValue + Convert::ToDouble(r->Next(1, 100)) / 100.0 * Convert::ToDouble(System::Math::Abs(minValue - maxValue)));
			}
		}
	
		System::Void ArraySortingPresenter::sortData() {
			insertionSort(mainArray, ArrayLength);
		}

	private:System::Void insertionSort(int arr[], int n) {
		int key, j;
		for (int i = 0; i < n; i++) {
			key = arr[i];
			j = i - 1;
	
			while (j >= 0 && arr[j] > key) {
				arr[j + 1] = arr[j];
				j -= 1;
			}
			arr[j + 1] = key;
		}
}

};
#pragma endregion
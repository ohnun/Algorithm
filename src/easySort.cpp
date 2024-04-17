#include <iostream>
#include <vector>
#include "easySort.hpp"
using std::cin;
using std::cout;
using std::endl;
using std::vector;

/*
 * Three simple sorting algorithms. 
 * @version: 0.01
 * @date: 2024-4-8
 * @author: John Sun
 */

// Swap elements of array. 
void swap(vector<int> &arr, int i, int j){
	arr[i] = arr[i] + arr[j];
	arr[j] = arr[i] - arr[j];
	arr[i] = arr[i] - arr[j];
}

void selectionSort(vector<int> &arr){
	if(arr.size() < 2){
		return;
	}

	/*
	 * Find the smallest number among i~arr.size(), 
	 * and then exchange it with arr[i]. 
	 */
	for(int i = 0; i < (int)arr.size() - 1; ++i){
		int minIndex = i;
		for(int j = i; j < (int)arr.size(); ++j){
			if(arr[j] < arr[minIndex]){
				minIndex = j;
			}
		}
		swap(arr, i, minIndex);
	}
}

void bubbleSort(vector<int> &arr){
	if(arr.size() < 2){
		return;
	}

	for(int i = (int)arr.size() - 1; i > 0; --i){
		for(int j = 0; j < i; ++j){
			if(arr[j] > arr[i]){
				swap(arr, i, j);
			}
		}
	}
}

void insertionSort(vector<int> &arr){
	if(arr.size() < 2){
		return;
	}

	for(int i = 1; i < (int)arr.size(); ++i){
		/*
		 * The condition for stopping is 
		 * until the previous value is smaller than the value to be inserted, 
		 * or the leftmost end is reached.
		 */
		for(int j = i; j > 0 && arr[j - 1] > arr[j]; --j){
			swap(arr, j - 1, j);
		}
	}
}
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
vector<int> swap(vector<int> arr, int i, int j){
	arr[i] = arr[i] + arr[j];
	arr[j] = arr[i] - arr[j];
	arr[i] = arr[i] - arr[j];

	return arr;
}

// Return sorted array using selection sort. 
vector<int> selectionSort(vector<int> arr){
	if(arr.size() < 2){
		return arr;
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
		arr = swap(arr, i, minIndex);
	}

	return arr;
}

// Return sorted array using bubble sort. 
vector<int> bubbleSort(vector<int> arr){
	if(arr.size() < 2){
		return arr;
	}

	for(int i = 0; i < (int)arr.size() - 1; ++i){
		for(int j = i + 1; j < (int)arr.size(); ++j){
			if(arr[j] < arr[i]){
				arr = swap(arr, i, j);
			}
		}
	}

	return arr;
}
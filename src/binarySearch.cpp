#include <vector>
#include "binarySearch.hpp"
using std::vector;

/*
 * Binary search. 
 * @version: 0.01
 * @date: 2024-4-10
 * @author: John Sun
 */

bool binarySearch(vector<int> arr, int key){
	int lIndex = 0;
	int rIndex = arr.size() - 1;

	if(arr.size() == 0){
		return false;
	}
	
	while(lIndex <= rIndex){
		// int middle = (lIndex + rIndex) >> 1;
		int middle = lIndex + ((rIndex - lIndex) >> 1);

		if(arr[middle] == key){
			return true;
		}

		if(arr[middle] < key){
			lIndex = middle + 1;
		}else{
			rIndex = middle - 1;
		}
	}

	return false;
}

int findLeft(vector<int> arr, int key){
	int lIndex = 0;
	int rIndex = arr.size() - 1;
	int ans = -1;

	if(arr.size() == 0){
		return ans;
	}

	while(lIndex <= rIndex){
		// int middle = (lIndex + rIndex) >> 1;
		int middle = lIndex + ((rIndex - lIndex) >> 1);

		if(arr[middle] >= key){
			ans = middle;
			rIndex = middle - 1;
		}else{
			lIndex = middle + 1;
		}
	}

	return ans;
}

int findRight(vector<int> arr, int key){
	int lIndex = 0;
	int rIndex = arr.size() - 1;
	int ans = -1;

	if(arr.size() == 0){
		return ans;
	}

	while(lIndex <= rIndex){
		// int middle = (lIndex + rIndex) >> 1;
		int middle = lIndex + ((rIndex - lIndex) >> 1);

		if(arr[middle] <= key){
			ans = middle;
			lIndex = middle + 1;
		}else{
			rIndex = middle - 1;
		}
	}

	return ans;
}
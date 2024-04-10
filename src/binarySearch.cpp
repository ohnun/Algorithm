#include <vector>
#include "src/binarySearch.hpp"
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
	int middle = (lIndex + rIndex) >> 1;
	
	while(lIndex < rIndex){
		if(arr[middle] == key){
			return true;
		}

		if(arr[middle] < key){
			lIndex = middle + 1;
		}else{
			rIndex = middle - 1;
		}
		middle = (lIndex + rIndex) >> 1;
	}

	return false;
}
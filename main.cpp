#include <iostream>
#include <vector>
#include <string>
#include "src/easySort.hpp"
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main(){
	vector<int> arr = {1, 3, 9, 0, 7};
	// arr = selectionSort(arr);
	// arr = bubbleSort(arr);
	arr = insertSort(arr);
	for(auto i: arr){
		cout << i << " ";
	}
	cout << endl;

	return 0;
}

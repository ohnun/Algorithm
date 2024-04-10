#include <iostream>
#include <vector>
#include "src/binarySearch.hpp"

using std::cout;
using std::endl;
using std::vector;

int main(){
	vector<int> arr{1, 3, 9, 11, 12, 43, 44, 45, 90, 99};
	int r = findRight(arr, 8);
	cout << r << endl;

	return 0;
}

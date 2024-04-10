#ifndef _BINARY_SEARCH_H
#define _BINARY_SEARCH_H

#include <vector>
using std::vector;

/*
* Return True when find the key in arr; 
* otherwise, return False. 
* warning: The arr must be sorted!!!
*/
bool binarySearch(vector<int> arr, int key);

/*
* Return the position whose value is 
* greater than or equal to (>=) key
* in the sorted arr; 
* otherwise, return -1. 
*/
int findLeft(vector<int> arr, int key);

#endif
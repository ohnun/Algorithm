#ifndef _BINARY_SEARCH_H
#define _BINARY_SEARCH_H

#include <vector>

/*
 * Return True when find the key in arr; 
 * otherwise, return False. 
 * warning: The arr must be sorted!!!
 */
bool binarySearch(std::vector<int> arr, int key);

/*
 * Return the left position whose value is 
 * greater than or equal to (>=) key
 * in the sorted arr; 
 * otherwise, return -1. 
 */
int findLeft(std::vector<int> arr, int key);

/*
 * Return the right position whose value is 
 * less than or equal to (<=) key
 * in the sorted arr; 
 * otherwise, return -1. 
 */
int findRight(std::vector<int> arr, int key);

#endif
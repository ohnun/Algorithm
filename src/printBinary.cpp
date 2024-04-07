#include <iostream>
using std::cin;
using std::cout;
using std::endl;

/*
* Print binary format of numerical values. 
* @version: 0.01
* @date: 2024-4-7
* @author: John Sun
*/
void printBinary(int num){
	for(int i = 31; i >= 0; --i){
		char tmp = ((num & (1 << i)) == 0)?'0':'1';
		
		cout << tmp;
	}
	cout << endl;
}

#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
	const string hexdigits = "0123456789ABCDEF";
	cout << "Enter a series of numbers between 0 and 15 separted by spaces." << endl;
	cout << "Hit ENTER when finished: " << endl;
	string result; // to restore hex string.
	string::size_type n; // to store input number.

	while(cin >> n){
		if(n < hexdigits.size()) result += hexdigits[n];
	}
	cout << "Your hex number is: " << result << endl;

	return 0;
}

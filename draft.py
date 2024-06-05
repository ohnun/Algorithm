tamplate = """\
#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main(){

	return 0;
}
"""

with open('./main.cpp', 'w') as f:
    f.write(tamplate)
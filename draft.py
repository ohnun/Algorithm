cpp_tamplate = """\
#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main(){
    // cout << "Hello, world!" << endl;

	return 0;
}
"""

# Traditional Java language tamplate. 
java_tamplate = """\
public class Main {

    public static void main(String[] args) {
        // System.out.println("Hello, world!");
    }
}
"""

with open('./Main.java', 'w') as f:
    f.write(java_tamplate)
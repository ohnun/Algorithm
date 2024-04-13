#include <climits>
#if false
class Solution {
public:
    int reverse(int x) {
        int r = 0;
        while(x != 0){
            r = 10 * r + x % 10;
            x = x / 10;
        }

        return r;

    }
};
#endif

class Solution {  
public:  
    int reverse(int x) {  
        int r = 0;  
        while (x != 0) {  
            int digit = x % 10;  
            // 检查是否会溢出  
            if (r > INT_MAX / 10 || (r == INT_MAX / 10 && digit > 7)) {  
                return 0; // INT_MAX的末位是7，所以超过7就会溢出  
            }  
            if (r < INT_MIN / 10 || (r == INT_MIN / 10 && digit < -8)) {  
                return 0; // INT_MIN的末位是8，所以小于-8就会溢出  
            }  
            r = r * 10 + digit;  
            x = x / 10;  
        }  
        return r;  
    }  
};

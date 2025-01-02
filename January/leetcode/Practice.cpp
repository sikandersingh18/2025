#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
         if (n <= 0) return false; 
        while (n % 3 == 0) { 
            n /= 3;
        }
        return n == 1; 
    }
};

int main(){
    int n;
    cin >> n;
    Solution solution;
    if(solution.isPowerOfThree( n)){
        cout << n <<" is a power of three " <<endl;
    }else{
        cout << n <<" is not a  power of three" <<endl;
    }
    return 0;
}
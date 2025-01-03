#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int maxScore(string s) {
    // Total number of ones in the string
    int totalOnes = count(s.begin(), s.end(), '1');
    
    // Variables to track the count of zeros and ones
    int leftZeros = 0;
    int rightOnes = totalOnes;
    int maxScore = 0;

    // Iterate through the string (exclude the last character to ensure split validity)
    for (int i = 0; i < s.length() - 1; ++i) {
        if (s[i] == '0') {
            ++leftZeros;
        } else {
            --rightOnes;
        }
        
        // Update the maximum score
        maxScore = max(maxScore, leftZeros + rightOnes);
    }

    return maxScore;
}

int main() {
    string s = "011101";
    cout << maxScore(s) << endl;  // Output: 5
    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int Largest_element(vector<int> &nums) {
    int temp = nums[0];
    for (int i = 1; i < nums.size(); i++) { // Start from second element
        if (temp < nums[i]) {
            temp = nums[i];
        }
    }
    return temp;
}

int main() {
    int n;
    vector<int> nums;
    cout << "Enter the size of the array: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int val;
        cout << "Enter element " << (i + 1) << ": ";
        cin >> val;
        nums.push_back(val);
    }

    int largest = Largest_element(nums);
    cout << "Largest element is: " << largest << endl;

    return 0;
}

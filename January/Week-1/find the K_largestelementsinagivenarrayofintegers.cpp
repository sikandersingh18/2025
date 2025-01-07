#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Largest_elements(vector<int> &nums)
{
    sort(nums.begin(), nums.end(), greater<int>());

    int k;
    cout << "Enter K: ";
    cin >> k;
    if (k > nums.size()) {
        cout << "K is larger than the array size!" << endl;
        return;
    }
    cout << "Top " << k << " elements are: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    vector<int> nums;
    cout << "Enter the size of the array: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int val;
        cout << "Enter element " << (i + 1) << ": ";
        cin >> val;
        nums.push_back(val);
    }

    Largest_elements(nums);

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr, int target) {
    int st = 0, en = arr.size() - 1;

    while (st <= en) {
        int mid = st + (en - st) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            st = mid + 1;
        }
        else {
            en = mid - 1;
        }
    }

    return -1; // not found
}

int main() {
    vector<int> arr = {1, 2, 4, 6, 7};
    int target;

    cout << "Enter target: ";
    cin >> target;

    int result = binarySearch(arr, target);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}

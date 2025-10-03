#include <iostream>
#include <vector>
using namespace std;

int findFirst(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            ans = mid;
            high = mid - 1; // keep searching left
        }
        else if (arr[mid] > target) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return ans;
}

int findLast(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            ans = mid;
            low = mid + 1; // keep searching right
        }
        else if (arr[mid] > target) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return ans;
}

vector<int> first_last(vector<int>& arr, int target) {
    int first = findFirst(arr, target);
    int last = findLast(arr, target);
    return {first, last};
}

int main() {
    vector<int> arr = {10, 20, 20, 35, 45, 66, 77, 77};
    int target = 20;

    vector<int> res = first_last(arr, target);

    cout << "Result: " << res[0] << "," << res[1] << endl;
    return 0;
}

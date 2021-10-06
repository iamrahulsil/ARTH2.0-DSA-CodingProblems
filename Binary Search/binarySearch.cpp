#include <bits/stdc++.h>
using namespace std;

class binarySearch {
public:
  int searchElement(vector<int> &nums, int target) {
    int left = 0, right = nums.size() - 1;

    while (left <= right) {
      int mid = left + (right - left) / 2;

      if (nums[mid] == target)
        return mid;
      else if (nums[mid] < target)
        left = mid + 1;
      else if (nums[mid] > target)
        right = mid - 1;
    }
    return -1;
  }
};

int main() {

  vector<int> v = {0, 1, 21, 33, 45, 45, 61, 71, 72, 73};
  int target = 33;

  binarySearch obj;
  cout << obj.searchElement(v, target);
  return 0;
}
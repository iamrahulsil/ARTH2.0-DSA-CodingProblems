#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int firstIndex = -1;
  int lastIndex = -1;

  void firstPosition(vector<int> arr, int target) {

    int left = 0, right = arr.size() - 1;

    while (left <= right) {
      int mid = left + (right - left) / 2;

      if (arr[mid] == target) {
        firstIndex = mid;
        right = mid - 1;
      } else if (arr[mid] < target)
        left = mid + 1;
      else if (arr[mid] > target)
        right = mid - 1;
    }
  }

  void lastPosition(vector<int> arr, int target) {

    int left = 0, right = arr.size() - 1;

    while (left <= right) {
      int mid = left + (right - left) / 2;

      if (arr[mid] == target) {
        lastIndex = mid;
        left = mid + 1;
      } else if (arr[mid] < target)
        left = mid + 1;
      else if (arr[mid] > target)
        right = mid - 1;
    }
  }

  vector<int> searchRange(vector<int> &nums, int target) {

    firstPosition(nums, target);
    lastPosition(nums, target);

    return {firstIndex, lastIndex};
  }
};

int main() {

  vector<int> v = {0, 1, 21, 33, 45, 45, 45, 45, 45, 45, 61, 71, 73};
  int target = 45;

  Solution obj;
  vector<int> ans = obj.searchRange(v, target);
  for (auto ele : ans)
    cout << ele << " ";
  return 0;
}
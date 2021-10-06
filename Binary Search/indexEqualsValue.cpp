#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int searchIndex(vector<int> &nums) {
    int left = 0, right = nums.size() - 1;

    while (left <= right) {
      int mid = left + (right - left) / 2;

      if (nums[mid] == mid)
        return mid;
      else if (nums[mid] < mid)
        left = mid + 1;
      else if (nums[mid] > mid)
        right = mid - 1;
    }
    return -1;
  }
};
int main() {

  vector<int> v = {-5, -3, 0, 2, 4, 5, 9};

  Solution obj;

  cout << obj.searchIndex(v);
  return 0;
}
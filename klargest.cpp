#include <iostream>
using namespace std;
#include <algorithm>
#include <queue>
#include <vector>

int kth_largest(vector<int> values, int k) {
  priority_queue<int, vector<int>, greater<int>> min_heap;

  sort(values.begin(), values.end(), greater<int>());

  return values[k - 1];
}
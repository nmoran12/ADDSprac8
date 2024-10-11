#include <iostream>
#include <vector>

#include "klargest.cpp"

int kth_largest(std::vector<int> values, int k);  // Declaration of the function

int main() {
  // Test case: An unsorted vector of integers
  std::vector<int> values = {3, 2, 1, 5, 6, 4, 10, 200};

  // Define the value of k
  int k = 2;  // We want to find the 2nd largest element

  // Call the kth_largest function and print the result
  int result = kth_largest(values, k);

  std::cout << "The " << k << "th largest element is: " << result << std::endl;

  return 0;
}

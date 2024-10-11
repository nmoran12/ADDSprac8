#include <iostream>

#include "Heap.tpp"  // Ensure this points to the correct location of your Heap implementation

int main() {
  // Create a Heap instance
  Heap<int> myHeap;

  // Test insert function
  std::cout << "Inserting elements: 10, 5, 3, 2, 7" << std::endl;
  myHeap.insert(10);
  myHeap.insert(5);
  myHeap.insert(3);
  myHeap.insert(2);
  myHeap.insert(7);
  myHeap.insert(8);
  std::cout << "Heap after insertions: ";
  myHeap.printHeap();

  // Test getMin function
  std::cout << "Minimum element: " << myHeap.getMin() << std::endl;

  // Test remove function (removing the root, which is the minimum element)
  std::cout << "Removing the minimum element..." << std::endl;
  myHeap.remove(myHeap.getMin());
  std::cout << "Heap after removing the minimum element: ";
  myHeap.printHeap();

  // Further testing with more inserts and removals
  std::cout << "Inserting elements: 1, 8" << std::endl;
  myHeap.insert(1);
  myHeap.insert(8);
  std::cout << "Heap after more insertions: ";
  myHeap.printHeap();

  std::cout << "Minimum element: " << myHeap.getMin() << std::endl;
  std::cout << "Removing the minimum element..." << std::endl;
  myHeap.remove(myHeap.getMin());
  std::cout << "Heap after removing the minimum element: ";
  myHeap.printHeap();

  return 0;
}

#include <iostream>
int main() {
  int *arr = new int[10];
  int res = arr[10];  // index out of bounds
  std::cout << res << std::endl;
  delete[] arr;
  return 0;                                                                                                                                                             
}

#include "myadd.h"
#include <iostream>

int main() {
  std::cout << "Hello, World!" << std::endl;
  Eigen::Vector3d a(1, 1, 1), b(2, 2, 2);
  auto c = myadd(a, b);
  std::cout << "Test library myadd:" << std::endl;
  std::cout << "(1, 1, 1) + (2, 2, 2) = (" << c(0) << ", " << c(1) << ", "
            << c(2) << ")" << std::endl;
}

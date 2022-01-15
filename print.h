#ifndef PRINT_H_
#define PRINT_H_

#include <iostream>
#include <string>

// TODO(yrom1): overload print using concepts
#define Container typename
#define Single typename

template <typename T>
void printItem(const T& item) {
  std::cout << item;
}

void printItem(const std::string& str) { std::cout << "'" << str << "'"; }

template <Container T>
void prints(const T& container) {
  std::cout << '[';
  typename T::size_type idx = 0;
  for (const auto& elem : container) {
    ++idx;
    printItem(elem);
    if (idx != container.size()) {
      std::cout << ", ";
    }
  }
  std::cout << ']';
  std::cout << '\n';
}

template <Single T>
void print(const T& item) {
  printItem(item);
  std::cout << '\n';
}

#endif  // PRINT_H_

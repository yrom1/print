#ifndef PRINT_H_
#define PRINT_H_

#include <iostream>
#include <string>
#include <ranges>


// start printItem

void printItem(const std::string& str) { std::cout << "'" << str << "'"; }

void printItem(const char& c) { std::cout << "'" << c << "'"; }

template <typename T>
void printItem(const T& item) {
  std::cout << item;
}

// end printItem


// start printHead

template <typename T>
void printHead(const T& item) {
  printItem(item);
}

template <std::ranges::range T>
void printHead(const T& container) {
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
}

// end printHead


// start print

void print() { std::cout << '\n'; }

template <typename T, typename... TAIL>
void print(const T &head, TAIL... tail) {
  printHead(head);
  print(tail...);
}

// end print


#endif  // PRINT_H_

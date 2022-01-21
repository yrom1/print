#ifndef PRINT_H_
#define PRINT_H_

#include <iostream>
#include <ranges>
#include <string>

namespace pr {

template<typename T>
concept Printable = requires(T t) {
  { std::cout << t } -> std::same_as<std::ostream&>;
};

// start printItem

void printItem(const std::string& str) { std::cout << "\"" << str << "\""; }

void printItem(const char& c) { std::cout << "'" << c << "'"; }

template <Printable T>
void printItem(const T& item) {
  std::cout << item;
}

// end printItem

// start printHead

void printHead(const char* item) {
  std::string str{item};
  printItem(str);
}

void printHead(const std::string& item) {
  printItem(item);
}

template <Printable T>
void printHead(const T& item) {
  printItem(item);
}

template <std::ranges::range T>
void printHead(const T& container) {
  std::cout << '[';
  typename T::size_type idx = 0;
  for (const auto& elem : container) {
    ++idx;
    printHead(elem);
    // printItem(elem);
    if (idx != container.size()) {
      std::cout << ", ";
    }
  }
  std::cout << ']';
}

// end printHead

// start pr

void pr() { std::cout << '\n'; }

template <typename HEAD, typename... TAIL>
void pr(const HEAD& head, TAIL... tail) {
  printHead(head);
  std::cout << ' ';
  pr(tail...);
}

// end pr

} // namespace pr

#endif  // PRINT_H_

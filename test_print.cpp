#include <list>
#include <string>
#include <vector>

#include "print.h"

int main() {
  print(std::list<std::string>{"app le", "banana", "pineapple"});
  print(std::vector<int>{1, 2, 3});
  print(std::string{"dog"});
  print("c string");
  print(1);
  print('a');
  std::vector<int> v = {42, 42, 42};
  print(v, std::vector<int>{1, 2, 3});
}

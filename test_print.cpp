#include <list>
#include <string>
#include <vector>

#include "print.h"

int main() {
  print(std::list<std::string>{"app le", "banana", "pineapple"});
  print(std::vector<int>{1, 2, 3});
  print(std::string{"dog"});
  // TODO(yrom1): C strings print("dog");
  print(1);
  print('a');
}

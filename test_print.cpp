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
  std::vector<int> v = {42, 42, 42};
  // TODO(yrom1): [42, 42, 42][1, 2, 3] put commas between them
  print(v, std::vector<int>{1, 2, 3});
}

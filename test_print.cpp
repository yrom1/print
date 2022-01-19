#include <list>
#include <string>
#include <vector>

#include "print.h"

int main() {
  prints(std::list<std::string>{"app le", "banana", "pineapple"});
  prints(std::vector<int>{1, 2, 3});
  print(std::string{"dog"});
  print(1);
  print('a');
}

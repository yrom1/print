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
  std::vector<std::string> v = {"variadic"};
  print(v, std::vector<std::string>{"arguments", "!"});
  print(std::vector<std::vector<std::vector<std::string>>>{{{std::string("and")}},{{std::string("very")}}, {{std::string("nested")}}});
}

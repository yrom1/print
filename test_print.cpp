#include <list>
#include <string>
#include <vector>

#include "print.h"

using namespace print;  // NOLINT

int main() {
  prn(std::list<std::string>{"app le", "banana", "pineapple"});
  prn(std::vector<int>{1, 2, 3});
  prn(std::string{"dog"});
  prn("C-string");
  pr('l');
  pr(3);
  pr('E');
  pr(7);
  prn();
  std::vector<std::pair<int, std::string>> vec_pair;
  vec_pair.push_back({1, "one"});
  prn(vec_pair);
  std::vector<std::string> v = {"variadic"};
  std::vector<std::string> a = {"arguments", "!"};
  prn(v, a);
  prn(std::vector<std::vector<std::vector<std::string>>>{
      {{std::string("and")}},
      {{std::string("very")}},
      {{std::string("nested")}}});
}

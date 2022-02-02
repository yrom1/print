# print
Python style `print` for C++
```cpp
#include <list>
#include <string>
#include <vector>

#include "print.h"

int main() {
  print::prn(std::list<std::string>{"app le", "banana", "pineapple"});
  print::prn(std::vector<int>{1, 2, 3});
  print::prn(std::string{"dog"});
  print::prn("C-string");
  print::pr('l');
  print::pr(3);
  print::pr('E');
  print::pr(7);
  print::prn();
  std::vector<std::pair<int, std::string>> vec_pair;
  vec_pair.push_back({1, "one"});
  print::prn(vec_pair);
  std::vector<std::string> v = {"variadic"};
  std::vector<std::string> a = {"arguments", "!"};
  print::prn(v, a);
  print::prn(std::vector<std::vector<std::vector<std::string>>>{
      {{std::string("and")}},
      {{std::string("very")}},
      {{std::string("nested")}}});
}
```
```
["app le", "banana", "pineapple"] 
[1, 2, 3] 
"dog" 
"C-string" 
'l' 3 'E' 7 
[(1, "one")] 
["variadic"] ["arguments", "!"] 
[[["and"]], [["very"]], [["nested"]]] 
```
`prn` and `pr` are references to the print functions in the [Arc](http://www.arclanguage.org/tut.txt) programming language, which do or do not print a newline ('\n') at the end respectively.
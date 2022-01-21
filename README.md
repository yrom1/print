# print
Python style `print` for C++
```cpp
#include <list>
#include <string>
#include <vector>

#include "print.h"

using namespace print;

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
  std::vector<std::string> v = {"variadic"};
  std::vector<std::string> a = {"arguments", "!"};
  prn(v, a);
  prn(std::vector<std::vector<std::vector<std::string>>>{
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
["variadic"] ["arguments", "!"] 
[[["and"]], [["very"]], [["nested"]]] 
```
`prn` and `pr` are references to the print functions in the [Arc](http://www.arclanguage.org/tut.txt) programming language, which do or do not print a newline (`'\n'`) at the end respectively.

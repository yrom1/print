# print
Python style `print` for C++

# Usage
```cpp
print(std::list<std::string>{"app le", "banana", "pineapple"});
print(std::vector<int>{1, 2, 3});
print(std::string{"dog"});
print("c string");
print(1);
print('a');
std::vector<std::string> v = {"variadic"};
print(v, std::vector<std::string>{"arguments", "!"});
print(std::vector<std::vector<std::vector<std::string>>>{
    {{std::string("and")}},
    {{std::string("very")}},
    {{std::string("nested")}}});
```

```
["app le", "banana", "pineapple"]
[1, 2, 3]
"dog"
"c string"
1
'a'
["variadic"] ["arguments", "!"]
[[["and"]], [["very"]], [["nested"]]]
```

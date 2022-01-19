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
  std::vector<int> v = {42, 42, 42};
  print(v, std::vector<int>{1, 2, 3}); // accepts variadic arguments
```

```
["app le", "banana", "pineapple"]
[1, 2, 3]
"dog"
"c string"
1
'a'
[42, 42, 42] [1, 2, 3]
```

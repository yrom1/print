# print
Python style `print` for C++

```cpp
pr::pr(std::list<std::string>{"app le", "banana", "pineapple"});
pr::pr(std::vector<int>{1, 2, 3});
pr::pr(std::string{"dog"});
pr::pr("c string");
pr::pr(1);
pr::pr('a');
std::vector<std::string> v = {"variadic"};
pr::pr(v, std::vector<std::string>{"arguments", "!"});
pr::pr(std::vector<std::vector<std::vector<std::string>>>{
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

`pr` is a reference to the name of a print function in the [Arc](http://www.arclanguage.org/tut.txt) language.

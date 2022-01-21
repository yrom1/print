import subprocess

with open('test_print.cpp', 'r') as f:
    test_print_cpp = f.read()

c1 = ["bash", "run_tests.sh"]
p1 = subprocess.run(c1, check=True, capture_output=True)

test_print_cpp_subprocess_stdout = p1.stdout.decode('utf-8')

with open("README.md", 'w') as f:
    def write_codeblock(code: str, style: str = "") -> None:
        f.write(f"```{style}\n")
        f.write(code)
        f.write("```\n")

    f.write("# print\n")
    f.write("Python style `print` for C++\n")
    write_codeblock(test_print_cpp, "cpp")
    write_codeblock(test_print_cpp_subprocess_stdout)
    f.write("`prn` and `pr` are references to the print functions in the [Arc](http://www.arclanguage.org/tut.txt) programming language, which do or do not print a newline ('\\n') at the end respectively.")

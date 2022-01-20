#!/usr/bin/env bash
set -eou pipefail
g++-11 -std=c++20 test_print.cpp && ./a.out

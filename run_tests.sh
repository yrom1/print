#!/usr/bin/env bash
set -eou pipefail
g++ -std=c++20 test_print.cpp && ./a.out

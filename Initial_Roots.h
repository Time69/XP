#pragma once
#include <iostream>
#include <cmath>
#include <boost/multiprecision/cpp_int.hpp>
#include <ctime>
#include <vector>

using boost::multiprecision::cpp_int;

cpp_int euler_function(cpp_int n);
std::vector<cpp_int> initial_roots(cpp_int number, int amount);

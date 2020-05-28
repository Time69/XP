#pragma once
#include <iostream>
#include <cmath>
#include <boost/multiprecision/cpp_int.hpp>
#include <ctime>
#include <vector>

using boost::multiprecision::cpp_int;




cpp_int modular_pow(cpp_int base, cpp_int exponent, cpp_int modulus);
cpp_int create_number(int n);
cpp_int convert_binary_to_decimal(cpp_int number);
bool Rabin_Miller(const cpp_int &p, int n , int t );
cpp_int create_prime_number(int n);
bool is_prime(const cpp_int &p, int n , int t );
std::string convert_decimal_to_binary(cpp_int number);

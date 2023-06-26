cmake_minimum_required(VERSION 3.22)
project(what_unit_tests_tell_us_about_architecture)

set(CMAKE_CXX_STANDARD 17)

add_library(what_unit_tests_tell_us_about_architecture single-responsibility/EggLayingWoolMilkPig.cpp single-responsibility/EggLayingWoolMilkPigTest.cpp single-responsibility/EggLayingWoolMilkPig.h single-responsibility/EggLayingWoolMilkPig.h single-responsibility/One.h single-responsibility/One.cpp single-responsibility/Two.h single-responsibility/Two.h single-responsibility/Two.cpp)

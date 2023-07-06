cmake_minimum_required(VERSION 3.22)
project(what_unit_tests_tell_us_about_architecture)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
FetchContent_MakeAvailable(googletest)

function(add_project NAME)
    set(app ${NAME})
    set(test ${app}-test)
    project(${app})

    file(GLOB_RECURSE src "src/*.c*")
    add_executable(${app} ${src} app/main.cpp)

    file(GLOB_RECURSE test_src "test/*.c*")
    add_executable(${test} ${src} ${test_src})
    target_link_libraries(${test} gtest gmock gtest_main)
endfunction()

add_subdirectory(single-responsibility)
add_subdirectory(dependency-inversion)
add_subdirectory(common-mistakes)
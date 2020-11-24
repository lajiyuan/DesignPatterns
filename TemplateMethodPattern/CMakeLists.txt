

cmake_minimum_required(VERSION 3.17)

project(TemplateMethodPattern)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(glog)

add_executable(main test_1/main.cpp test_1/Library.h test_1/Application.h)
add_executable(main2 test_2/main2.cpp test_2/GreatLibrary.h test_2/GreatApplication.h)

target_link_libraries(main glog)
target_link_libraries(main2 glog)
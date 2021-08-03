#ifndef CMAKELISTS_TXT_H
#define CMAKELISTS_TXT_H
#include <iostream>
#include <boost/format.hpp>
#include <string>

std::string get_CMakeLists_txt(std::string name){
    boost::format fmt =  boost::format(R"(
cmake_minimum_required(VERSION 3.14)

project(%s)

set(CMAKE_BUILD_TYPE Release CACHE STRING
      "None Debug Release RelWithDebInfo MinSizeRel"
      FORCE)

set (CMAKE_CXX_STANDARD 20)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_subdirectory(src)
 )") % name.c_str();
    return fmt.str();
}

#endif
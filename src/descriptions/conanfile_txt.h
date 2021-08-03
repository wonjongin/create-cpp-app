#ifndef CONANFILE_TXT_H
#define CONANFILE_TXT_H
#include <iostream>
#include <boost/format.hpp>
#include <string>

std::string get_conanfile_txt(std::string name){
    boost::format fmt =  boost::format(R"(
[requires]
boost/1.76.0

[generators]
cmake )");
    return fmt.str();
}

#endif
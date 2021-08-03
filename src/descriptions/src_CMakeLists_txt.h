#ifndef SRC_CMAKELISTS_TXT_H
#define SRC_CMAKELISTS_TXT_H
#include <iostream>
#include <boost/format.hpp>
#include <string>

std::string get_src_CMakeLists_txt(std::string name){
    boost::format fmt =  boost::format(R"(
file(GLOB_RECURSE HEADER_FILES *.h)
file(GLOB_RECURSE CODE_FILES *.cpp)

add_executable(%s
    ${HEADER_FILES}
    ${CODE_FILES}
)

target_link_libraries(%s
    ${CONAN_LIBS}
)
 )") % name.c_str() % name.c_str();
    return fmt.str();
}

#endif
#ifndef README_MD_H
#define README_MD_H
#include <iostream>
#include <boost/format.hpp>
#include <string>

std::string get_README_md(std::string name){
    boost::format fmt =  boost::format(R"(# %s
hello world
## Build
./build.sh
    )") % name.c_str();
    return fmt.str();
}

#endif
#ifndef BUILD_SH_H
#define BUILD_SH_H
#include <iostream>
#include <boost/format.hpp>
#include <string>

std::string get_build_sh(std::string name){
    boost::format fmt =  boost::format(R"(#!/bin/bash

conan install . -if build;
cmake -Bbuild;
make -C build;
)");
    return fmt.str();
}

#endif
#ifndef MAIN_CPP_H
#define MAIN_CPP_H
#include <iostream>
#include <boost/format.hpp>
#include <string>

std::string get_main_cpp(std::string name){
    boost::format fmt =  boost::format(R"(#include <iostream>

using namespace std;
int main(int argc, char *argv[]){
    cout << "%s" << endl;
    return 0;
} )") % name.c_str();
    return fmt.str();
}

#endif
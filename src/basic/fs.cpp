#include "fs.h"
#include <boost/filesystem/fstream.hpp>
#include <iostream>

void fs::writhToFile(std::string path, std::string desc){
    boost::filesystem::path p{path};
    boost::filesystem::ofstream ofs{p};
    ofs << desc;
}
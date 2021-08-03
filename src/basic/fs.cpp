#include "fs.h"
#include <boost/filesystem/fstream.hpp>
#include <iostream>

using namespace std;
using namespace boost;
void fs::writhToFile(string path, string desc){
    filesystem::path p{path};
    filesystem::ofstream ofs{p};
    ofs << desc;
}
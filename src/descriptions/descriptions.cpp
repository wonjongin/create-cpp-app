#include "descriptions.h"
#include "README_md.h"
#include "main_cpp.h"
#include "src_CMakeLists_txt.h"
#include "conanfile_txt.h"
#include "CMakeLists_txt.h"
#include "gitignore.h"
#include "build_sh.h"

using namespace std;
string desc::getDesc(string name, string fileName){
    if(fileName == "README.md"){
        return get_README_md(name);
    } else if (fileName == "main.cpp") {
        return get_main_cpp(name);
    } else if (fileName == "src/CMakeLists.txt") {
        return get_src_CMakeLists_txt(name);
    } else if (fileName == "conanfile.txt") {
        return get_conanfile_txt(name);
    } else if (fileName == "CMakeLists.txt") {
        return get_CMakeLists_txt(name);
    } else if (fileName == ".gitignore") {
        return get_gitignore(name);
    } else if (fileName == "build.sh") {
        return get_build_sh(name);
    }
    return "";
}
#include <iostream>
#include <boost/filesystem.hpp>
#include <filesystem>
#include "basic/fs.h"
#include "basic/text.h"
#include "descriptions/descriptions.h"
using namespace std;
namespace sfs=std::filesystem;

int main(int argc, char *argv[]){
    cout << "🎬 Starting ..." << endl;
    string name = argv[1];
    boost::filesystem::path dir = argv[1];
    cout << "📂 Creating project directory..." << endl;
    boost::filesystem::create_directory(dir);
    cout << "📂 Creating src directory..." << endl;
    boost::filesystem::create_directory(name + "/src");
    cout << "📂 Creating README.md ..." << endl;
    fs::writhToFile(name + "/README.md", desc::getDesc(name, "README.md"));
    cout << "📂 Creating main.cpp ..." << endl;
    fs::writhToFile(name + "/src/main.cpp", desc::getDesc(name, "main.cpp"));
    cout << "📂 Creating CMakeLists.txt in src ..." << endl;
    fs::writhToFile(name + "/src/CMakeLists.txt", desc::getDesc(name, "src/CMakeLists.txt"));
    cout << "📂 Creating conanfile.txt ..." << endl;
    fs::writhToFile(name + "/conanfile.txt", desc::getDesc(name, "conanfile.txt"));
    cout << "📂 Creating CMakeLists.txt ..." << endl;
    fs::writhToFile(name + "/CMakeLists.txt", desc::getDesc(name, "CMakeLists.txt"));
    cout << "📂 Creating .gitignore ..." << endl;
    fs::writhToFile(name + "/.gitignore", desc::getDesc(name, ".gitignore"));
    cout << "📂 Creating build.sh ..." << endl;
    fs::writhToFile(name + "/build.sh", desc::getDesc(name, "build.sh"));
    cout << "🔄 Changing permission of build.sh ..." << endl;
    sfs::permissions(name + "/build.sh", sfs::perms::owner_exec | sfs::perms::group_exec | sfs::perms::others_exec, sfs::perm_options::add);

    cout << "🛎 Finished ..." << endl;
    return 0;
}

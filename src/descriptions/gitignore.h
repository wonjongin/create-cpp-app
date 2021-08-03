#ifndef GITIGNORE_H
#define GITIGNORE_H
#include <iostream>
#include <boost/format.hpp>
#include <string>

std::string get_gitignore(std::string name){
    boost::format fmt =  boost::format(R"(
build/
.DS_Store

# IDEs and editors
/.idea
.project
.classpath
.c9/
*.launch
.settings/
*.sublime-workspace

# IDE - VSCode
.vscode/*
!.vscode/settings.json
!.vscode/tasks.json
!.vscode/launch.json
!.vscode/extensions.json

)");
    return fmt.str();
}

#endif
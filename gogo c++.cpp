#include <string>
#include <iostream>
#include <cstdio> 
#include <cstdlib> 
#include <direct.h>
#include <windows.h>


    void DFiles(){
        system("dir");  // windows command ni!!
        system("pause");  // mag pause ang screen kadyot!!!
    }

void CRDirectory(){
    std::cout << "\nEnter the directory name: ";
    std::string dirName;
    std::cin >> dirName;
if (_mkdir(dirName.c_str()) == 0) {
        std::cout << "\nDirectory '" << dirName << "' Successfully Created\n";
    } else {
        std::cout << "\nFailed to Create Directory '" << dirName << "'\n";
}

   system("pause");
}

void changeDirectory() {
    char currentDir[FILENAME_MAX];
    _getcwd(currentDir, sizeof(currentDir));
    std::cout << "\nCurrent Directory: " << currentDir << '\n';


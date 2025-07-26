#include <iostream>
#include <string>

#ifndef PROJECT_VERSION_MAJOR
#define PROJECT_VERSION_MAJOR 0
#endif

#ifndef PROJECT_VERSION_MINOR
#define PROJECT_VERSION_MINOR 0
#endif

#ifndef PROJECT_VERSION_PATCH
#define PROJECT_VERSION_PATCH 0
#endif

std::string getVersion() {
    return std::to_string(PROJECT_VERSION_MAJOR) + "." + 
           std::to_string(PROJECT_VERSION_MINOR) + "." + 
           std::to_string(PROJECT_VERSION_PATCH);
}

int main(int argc, char* argv[]) {
    if (argc > 1 && std::string(argv[1]) == "-version") {
        std::cout << "Version: " << getVersion() << std::endl;
        return 0;
    }

    std::cout << "Hello, World!" << std::endl;
    std::cin.get();
    return 0;
}

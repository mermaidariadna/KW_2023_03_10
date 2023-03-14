#include "polindrom.hpp"
#include <fstream>
#include <string>
int main(int argc, char** argv){
        if (argc == 0) std::cout << "no file" << std::endl;
        FILE* input = fopen(argv[1], "r");
        polindromToFile(input);
        fclose(input);
        return 0;
}


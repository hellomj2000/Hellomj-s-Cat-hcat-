#include <fstream>
#include <filesystem>
#include <iostream>
#include <string>

int main(int argc, char** argv)
{
    std::filesystem::path p = argv[0];
    //input check
    if (argc < 2 || argc >= 3) {
        std::cout << "usage: .\\" << p.filename().string() << " <textfile>\n";
        return 1;
    }

    //create file obj named inf (infile)
    std::ifstream inf{ argv[1] };

    //check open succesfully?
    if (!inf){
        // Print an error and exit
        std::cerr << "error reading\n";
        return 1;
    }

    //read stuff line by line and cout
    std::string strInput{};
    while (std::getline(inf, strInput)){
	    std::cout << strInput << '\n';
    }
    return 0;

}
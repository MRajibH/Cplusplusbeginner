#include <iostream>
#include<fstream>
#include<vector>

int main (void)
{

    std::ifstream file("rajib.txt");

    std::string input;
    getline(file,input);
    std::cout<<input;
    file.close();
    return 0;
}
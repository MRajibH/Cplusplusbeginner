#include <iostream>
#include<fstream>
#include<vector>

int main (void)
{

    std::ifstream file("rajib.txt");
    std::vector<std::string> names;
    std::string input;
    while(file>>input)
    {
        names.push_back(input);

    }
    for(std::string name : names)
    {
        std::cout<<name<<std::endl;
    }

    file.close();
    return 0;
}
#include <iostream>
#include<fstream>
#include<vector>

int main (void)
{

    std::string filename;
    std::cout<<"Enter filename you wanna open: ";
    std::cin>>filename;
    std::ofstream file(filename,std::ios::app);
    std::vector<std::string> names;
    names.push_back("Rajib");
    names.push_back("Rajib hawlader");
    names.push_back("Md.Rajib Hawlader");
    for(std::string name : names)
    {
        file<<name<<std::endl;

    }

    file.close();
    return 0;
}
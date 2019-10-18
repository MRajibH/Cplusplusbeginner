#include<iostream>
#include<fstream>

#include<vector>

int main(void)
{
    std::ifstream ifile("hello.txt");
    std::vector <std::string> lines;
    std::string word;
    getline(ifile,word);


    lines.push_back(word);

    std::ofstream ofile("hellooutput.txt",std::ios::app);
    for(std::string lin : lines)
    {
        ofile<<lin<<std::endl;
    }


}

#include<iostream>
#include<vector>
#include<array>

void print_array(std::array<int,5>data)
{
    for(int i = 0; i < data.size();i++)
    {
        std::cout<<data[i]<<'\t';
    }

}

int main(void)
{
        std::array<int,5>staff;
        int size = 5, value;

        for (int i = 0; i < size; i++)
        {
            std::cin>>value;
            staff[i]= value;
        }
        std::array<int,5>array1=staff;

        print_array(array1);
        return 0;

}


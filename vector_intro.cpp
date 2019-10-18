#include<iostream>
#include<vector>

void print_array(std::vector<int>data)
{
    for(int i = 0; i < data.size();i++)
    {
        std::cout<<data[i]<<'\t';
    }

}

int main(void)
{
        std::vector<int>staff;
        int size = 5, value;

        for (int i = 0; i < size; i++)
        {
            std::cin>>value;
            staff.push_back(value);
        }
        std::vector<int>array =staff;

        print_array(array);
        return 0;

}

#include <iostream>
#include <string>
void swap_number(int number1, int number2)
{
   int temp = number2;
   number2 = number1;
   number1= temp;
   std::cout<<"Inside function: "<<number1<<'\t'<<number2<<std::endl;
}

void swap_number(std::string number1, std::string number2)
{
   std::string temp = number2;
   number2 = number1;
   number1= temp;
   std::cout<<"Inside string function: "<<number1<<'\t'<<number2<<std::endl;
}

int main (void)
{
    int number1, number2;
    std::cin>>number1>>number2;
    swap_number(number1, number2);
    std::cout<<"Inside main: "<<number1<<'\t'<<number2<<std::endl;
    std::string first_name = "Muhammad";
    std::string last_name = "Rajib";
    std::cout<<"Enter your name first_name:";
    std::cin>>first_name;
    std::cout<<"Enter your name last_name:";
    std::cin>>last_name;
    swap_number(first_name,last_name);
    std::cout<<"Your swapped name :"<<first_name<<'\t'<<last_name<<std::endl;
}
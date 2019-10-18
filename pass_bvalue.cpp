#include <iostream>
void swap_number(int number1, int number2)
{
   int temp = number2;
   number2 = number1;
   number1= temp;
   std::cout<<"Inside function: "<<number1<<'\t'<<number2<<std::endl;
}


int main (void)
{
    int number1, number2;
    std::cin>>number1>>number2;
    swap_number(number1, number2);
     std::cout<<"Inside main: "<<number1<<'\t'<<number2<<std::endl;
}
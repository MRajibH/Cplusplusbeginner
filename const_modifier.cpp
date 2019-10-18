#include <iostream>
void print_array(int data[], int size)
{


    for(int i = 0; i < size;i++)
    {
        data[i]++;   //add 1 to every content of an array
        std::cout<<data[i]<<'\t';
    }
}


int main (void)
{
    int array[]={1,2,4};
    print_array(array,3);
    std::cout<<array[0]<<'\t';
}
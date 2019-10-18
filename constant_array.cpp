#include <iostream>
void do_something(const int arr[])
{

}
void print_array(const int data[], int size)
{
    for(int i = 0; i < size;i++)
    {
          //add 1 to every content of an array
        std::cout<<data[i]<<'\t';
        do_something(data);
    }
}


int main (void)
{
    int array[]={1,2,4};
    print_array(array,3);
    std::cout<<array[0]<<'\t';
}
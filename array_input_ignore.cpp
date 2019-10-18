#include<iostream>
#include<limits>
void print_array(int array[],int size)
{
    for(int i = 0; i < size;i++)
    {
        std::cout<<array[i]<<'\t';
    }

}

int main(void)
{
    int array[4];
    int count = 0;
    for(int i = 0; i < 4;i++)
    {
        if(std::cin>>array[i])
        {
            //input worked
            count++;
        }
        else
        {
            ///invalid character
        }
    }
        std::cin.clear(); ///after getting invalid character as input cin stays at non working mode , to clear that we use clear
        std::cin.ignore(10,'\n'); ///ignore 10 character after newline

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');///ignore maximum character after newline
        print_array(array,count);
        int x;
        std::cin>>x;
        return 0;

}


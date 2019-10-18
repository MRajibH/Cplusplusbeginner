#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int main(void)
{
    int factorial,fact;
    cout<<"Enter any integer: ";
    cin>>factorial;
    fact=factorial;
    for(int i = factorial - 1; i >= 1; i--)
    {
        factorial *= i;
    }
    cout<<"Factorial of "<<fact<<" is = "<<factorial<<endl;

}


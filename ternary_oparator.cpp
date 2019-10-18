#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int main(void)
{
    int number = 10,guess;
    cout<<"Guess the Number : ";
    cin>>guess;
    guess == number ? cout<<" Vai Jitsen"<<endl: cout<<" Vai thogsen"<<endl;
    return 0;

}

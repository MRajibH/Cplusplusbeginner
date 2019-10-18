#include<iostream>
#include<string>

using namespace std;
int main(void)
{
    string mes;
    getline(cin,mes);
    mes.replace(9,5,"****");
    cout<<mes<<endl;
}

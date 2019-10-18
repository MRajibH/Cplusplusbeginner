#include<iostream>
#include<string>

using namespace std;
int main(void)
{
    string mes;
    getline(cin,mes);
    int a = mes.find("fuck");
    mes.replace(a,4,"****");
    cout<<mes<<endl;
}

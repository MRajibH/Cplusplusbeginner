#include<iostream>
#include<string>
using namespace std;
int main(void)
{
    string name;
    getline(cin,name);
    if(name == "Rajib")
    cout<<"Hello Rajib"<<endl;
    if (name.compare("Salman")== 0)
    cout<<"Hello Salman"<<endl;

    return 0;
}



#include<iostream>
#include<string>
using namespace std;
int main(void)
{
    string name;
    getline(cin,name);
    if(name.find("fuad")!= -1)
     {int store = name.find("fuad");
    /*cout<<name.substr(9,4)<<endl;
    name.replace(store,5,"Nailla");*/
    name.insert(store," Nailla ");
    cout<<name<<endl;
    getline(cin,name);
    name.insert(store," fucking ");
    cout<<name<<endl;
     }
     else
        cout<<name<<endl;
    return 0;
}


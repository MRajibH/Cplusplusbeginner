#include<iostream>
#include<stdio.h>
#include<float.h>
#include<cmath>
#define x 10.0012
using std::cout;
using std::endl;
int main(void)
{
    //cout<<SHRT_MIN;
    float a =100000000/3;
    enum{y =100};
     cout<<std::fixed<<a<<endl;
     cout<<FLT_DIG<<endl;
     cout<<DBL_DIG<<endl;
     cout<<LDBL_DIG<<endl;
     cout<<floor(10.25)<<endl;
     cout<<ceil(10.25)<<endl;
     cout<<fmin(10,25)<<endl;
     cout<<fmax(10,25)<<endl;
     cout<<remainder(25,10)<<endl;
     cout<<x<<endl;
     cout<<nearbyint(3.51)<<endl;

}

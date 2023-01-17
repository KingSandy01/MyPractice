//Program in C++ to check the upper and lower limits of integer.

#include <iostream>
#include <climits>
using namespace std;

int main(){
    cout<<"\n The Limitations of the DataTypes is: \n";
    cout<<"\n char max : "<<CHAR_MAX;
    cout<<"\n char min : "<<CHAR_MIN;
    cout<<"\n undigned char max : "<<UCHAR_MAX;
    cout<<"\n signed char min : "<<CHAR_MIN;
    cout<<"\n signed char max : "<<CHAR_MAX;
    cout<<"\n int max : "<<INT_MAX;
    cout<<"\n int min : "<<INT_MIN;
    cout<<"\n unsigned int max : "<<UINT_MAX;
    cout<<"\n long long max : "<<LLONG_MAX;
    cout<<"\n long long min : "<<LLONG_MIN;
    cout<<"\n unsigned long long max: "<<ULLONG_MAX;
   
    return 0;

}
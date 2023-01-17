#include <iostream>
using namespace std;

// Printing the sizes of the data types

int main(){
    cout<<"\n The Size of the various data types is mentioned as under: \n";
    cout<<"--------------------------------------------------------------";
    cout<<"\n char is "<<sizeof(char)<<" bytes";
    cout<<"\n int  is "<<sizeof(int)<<" bytes";
    cout<<"\n float is "<<sizeof(float)<<" bytes";
    cout<<"\n long is "<<sizeof(long)<<" bytes";
    cout<<"\n double is "<<sizeof(double)<<" bytes";
    cout<<"\n long long is "<<sizeof(long long)<<" bytes";
    cout<<"\n long double is "<<sizeof(long double)<<" bytes";
    cout<<"\n bool is "<<sizeof(bool)<<" bytes";

    return 0;
}
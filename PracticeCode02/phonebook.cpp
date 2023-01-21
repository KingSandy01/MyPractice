#include <iostream>
#include <string>
#include <cstring>  

using namespace std;

string get_string(string s);

int main(void)
{
    string names[] = {"Carter", "David"};
    string numbers[]= {"+91-9876543210", "+91-9753108642"};

    string name;
    cout<<"\n Name:";
    cin>>name;

    for(int i=0; i<2; i++)
    {
        if (strcmp(names[i], name)==0)
        {
            cout<<"Found \n"<<numbers[i];
            return 0;
        }
    }
    cout<<"Not Found \n";
    return 1;
    
}

// string get_string(string s)
//     {
//         string t;
//         cout<<s;
//         cin>>t;
//         return t;
//     }

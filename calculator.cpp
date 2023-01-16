#include<iostream>
using namespace std;

int main(){
    int a, b, c, opt;
    c=0;

    cout<<"\nChoose among the following Options: \n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n 5. Exit \n (Choose the option as 1/2/3/4/5 to proceed): ";
    cin>>opt;
   
    switch(opt){
        case 1: 
            cout<<"\nInput First Value: ";
            cin>>a;
            cout<<"\nInput Second Value: ";
            cin>>b;
            c=a+b;
            cout<<"\nSum of First and Second value is: "<<c;
            break;
        case 2:
            cout<<"\nInput First Value: ";
            cin>>a;
            cout<<"\nInput Second Value: ";
            cin>>b;
            c=a-b;
            cout<<"\nSubtracting of Second from First value we get: "<<c;
            break;
        case 3:
            cout<<"\nInput First Value: ";
            cin>>a;
            cout<<"\nInput Second Value: ";
            cin>>b;
            c=a*b;
            cout<<"\nProduct of First and Second value is: "<<c;
            break;
        case 4:
            cout<<"\nInput First Value: ";
            cin>>a;
            cout<<"\nInput Second Value: ";
            cin>>b;
            c=a/b;
            cout<<"\nDivision of First by Second value is: "<<c;
            break;
        case 5:
            cout<<"You Choose to Exit...";
            break;
    }
    

    return 0;

}
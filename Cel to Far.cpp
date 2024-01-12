#include <iostream>
using namespace std;
int main() {
     cout <<"Celsius to fahrenheit Converter"<<endl;
     int cal;
     int far=0;
     cout<<"Enter the val of teprature in Celsius:";
     cin>>cal;
    far= (cal * 9/5)+32;
    cout<<far<<"F"<<endl;

    return 0;
}
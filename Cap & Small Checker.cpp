 #include <iostream>
using namespace std;
int main() {
    char ch;

   
    cout << "Enter a character: ";
    cin >> ch;

     
    if (ch >= 'A' && ch <= 'Z') {
        cout << "The entered character is a capital letter." <<endl;
    }
     
    else if (ch >= 'a' && ch <= 'z') {
        cout << "The entered character is a small letter." <<endl;
    }
     
    else {
        cout << "The entered character is neither a capital nor a small letter." <<endl;
    }

    return 0;
}

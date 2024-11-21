/* Program to check pallindrome without using stack */
 #include <iostream>
#include <string>
using namespace std;

class Palindrome {
    string S1;
    public:
    void accept();
    void check();
}p;

void Palindrome::accept() {
    cout << "Enter the string to check:" << endl;
    cin >> S1;
}

void Palindrome::check() 
{
    int len = S1.length();
    int f=1;

    for (int i = 0; i < len / 2; ++i) {
        if (S1[i] != S1[len - i - 1]) {
            f =0;
            break;
        }
    }

    if (f==1)
     {
        cout << "The string is a palindrome" << endl;
     }
    else
     {
        cout << "The string is not a palindrome" << endl;
     }
}

int main() {
    int ch;

    do {
        cout << "Enter choice:" << endl;
        cout << "1. Accept string" << endl;
        cout << "2. Check whether string is a palindrome or not" << endl;
        cout << "3. Exit" << endl;
        cin >> ch;

        switch (ch) {
            case 1:
                p.accept();
                break;
            case 2:
                p.check();
                break;
            case 3:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (ch != 3);

    return 0;
}

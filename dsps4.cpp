#include <iostream>
#include <stack>
#include <string>
using namespace std;

class StringOperations
{
private:
    string str[10]; 

public:
    void checkPalindrome(const string &s)
    {
        stack<char> stack;
        int len = s.length();

        for (int i = 0; i < len; i++)
        {
            stack.push(s[i]);
        }

        for (int i = 0; i < len; i++)
        {
            if (stack.top() != s[i])
            {
                cout << s << " is not a palindrome." << endl;
                return;
            }
            stack.pop();
        }
        cout << s << " is a palindrome." << endl;
    }
    void palindrome()
    {
        string s;
        cout << "Enter string: ";
        getline(cin, s);
        checkPalindrome(s);
    }
};

int main()
{
    StringOperations S;
    int choice;

    do
    {
        cout << "\nChoose an operation to perform:\n";
        cout << "\1. Check Palindrome\n";
        cout << "2. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // To ignore the newline character left in the buffer

        switch (choice)
        {
        case 1:
            S.palindrome();
            break;
        case 2:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 7);

    return 0;
}

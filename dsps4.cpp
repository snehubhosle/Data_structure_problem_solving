#include <iostream>
#include<string>
using namespace std;
int len1=0,len2=0,len;
class dsps
{
    string S1;
    string S2;
    string S3;
public:
    void accept();
    void display();
    void strCmp();
    void strLen();
    void strCpy();
    void strRev();
    void strCat();
}S;

void dsps::accept()
{
    cout << "Enter the First string:" << endl;
    cin >> S1;
    cout << "Enter the second string:" << endl;
    cin >> S2;
}
 
 void dsps::display()
 {
    cout<<"\n"<<"First String:"<<S1<<"\t"<<"Second string:"<<S2<<endl;
 }
void dsps::strLen()
{
    for (int i = 0; S1[i] != '\0'; ++i)
    {
        len1++;
    }
    cout << "Length of first string is: " << len1 << endl;

    for (int i = 0; S2[i] != '\0'; ++i)
    {
        len2++;
    }
    cout << "Length of second string is: " << len2 << endl;
}

void dsps::strCmp()
{
    if (len1 != len2)
    {
        cout << "Strings are not the same" << endl;
        return;
    }
    for (int i = 0; i < len1; ++i)
    {
        if (S1[i] != S2[i])
        {
            cout << "Strings are not the same" << endl;
            return;
        }
    }
    cout << "Strings are the same" << endl;
}

void dsps::strCpy()
{
    for(int i=0;S2[i]!='\0';i++)
    {
        S1[i] = S2[i];
    }
    cout << "Copied string is: " << S1<< endl;
}

void dsps::strRev()
{
    int i;
 
cout << "First string " << S1 << " reversed is:"<<endl; 
    for (i = len1 - 1; i >= 0; i--)
    {
        cout << S1[i];
    }

 cout << "\nSecond string " << S2 << "reversed is:"<<endl; 
  
    for (i = len2 - 1; i >= 0; i--)
    {
        cout << S2[i];
    }
   
}

void dsps::strCat()
{

  S3=S1+S2;
  cout<<"Concated string is:"<<S3<<endl;
}

int main()
{
    int ch;
    do
    {
        cout << "\nMenu" << endl;
        cout << "1. Accept string" << endl;
        cout << "Enter your choice:" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            S.accept();
            break;
        case 2:
            S.strLen();
            break;
        case 3:
            S.strCmp();
            break;
        case 4:
            S.strCpy();
            break;
         case 5:
           S.strCat();
            break;
        case 6:
            S.strRev();
            break;
        case 7:
             S.display();
             break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    } while (ch != 0);
    return 0;
}
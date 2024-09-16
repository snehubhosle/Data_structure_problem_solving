#include <iostream>
#include <string>
using namespace std;

int n, tot;
float avg; 
class stud
{
    int rono;
    string name, add;
public:
    void accept();
    void display();
    void l_search();
    void b_search();
    void bubble_sort();
} s[100];

void stud::accept()
{
    cout << "Enter the name of student:" << endl;
    cin >> name;
    int f=0;
    do
    {
       cout<<"Enter the Roll No:"<<endl;
       cin>>rono;
       if(rono>0 && rono<=tot)
       {
        f=1;
       }
       else{
        cout<<"Enter valid Roll No:"<<endl;
       }
    } while (!f);
    cout << "Enter the address:" << endl;
    cin >> add;
}

void stud::display()
{
    cout << "Name: " << name << "\tRoll no: " << rono << "\tAddress: " << add << endl;
}

void stud::l_search()
{
    int flag = 0, no;
    cout << "Enter the roll no to search:" << endl;
    cin >> no;
    for (int i = 0; i < n; i++)
    {
        if (no == s[i].rono)
        {
            flag = 1;
            cout << "Roll no " << no << " was present in the records." << endl;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Roll no " << no << " was not present in the records." << endl;
    }
}

void stud::bubble_sort()
{
    stud temp;
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (s[j].rono > s[j + 1].rono)
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}

void stud::b_search()
{
    int no;
    cout << "Enter the roll no to search:" << endl;
    cin >> no;
    bubble_sort(); 
    int low = 0, high = n - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (s[mid].rono == no)
        {
            cout << "Roll no " << no << " was present." << endl;
            return;
        }
        else if (s[mid].rono < no)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << "Roll no " << no << " was not present." << endl;
}

int main()
{
    int ch,no,f=0;
    do
    {
        cout << "\n Menu" << endl;
        cout << "1. Accept" << endl;
        cout << "2. Display" << endl;
        cout << "3. Linear search" << endl;
        cout << "4. Binary search" << endl;
        cout << "5. Exiting..!!" << endl;
        cout << "Enter the choice:" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter the total number of the students:" << endl;
            cin >> tot;
                do
                {
                cout<<"Enter the no of record wich you want to store:"<<endl;
                cin>>no;
                if(no>0 && no<=tot)
                {
                    f=1;
                }
                else{
                    cout<<"Sorry..Record no is greater than total number of students:"<<endl;
                }
                } while (!f);
            avg = (n / (float)tot) * 100;
            for (int i = 0; i < n; i++)
            {
                s[i].accept();
            }
            break;
        case 2:
            cout << "Records of students:" << endl;
            for (int i = 0; i < n; i++)
            {
                s[i].display();
            }
            cout << "\n Average percentage of students who attended the session: " << avg << "%" << endl;
            break;
        case 3:
            s[0].l_search();
            break;
        case 4:
            s[0].b_search();
            break;
        case 5:
            cout << "Exiting...!" << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
        }
    } while (ch != 5);
    return 0;
}

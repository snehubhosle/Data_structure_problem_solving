#include <iostream>
using namespace std;

class LinearSearch
{
    int a[100], n, i, t;
public:
    void accept();
    int search();
    int count();
    void firstAndLastOccurrence();
};

void LinearSearch::accept()
{
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements in the array: ";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int LinearSearch::search()
{
    cout << "Enter the target: ";
    cin >> t;
    for (i = 0; i < n; i++)
    {
        if (a[i] == t)
        {
            cout << "Element " << t << " found at index " << i << endl;
            return i;
        }
    }
    cout << "Element " << t << " not found" << endl;
    return -1; /
}

int LinearSearch::count()
{
    cout << "Enter the target to count: ";
    cin >> t;
    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] == t)
        {
            count++;
        }
    }
    cout << "Element " << t << " occurred " << count << " times" << endl;
    return count;
}

void LinearSearch::firstAndLastOccurrence()
{
    cout << "Enter the target to find occurrences: ";
    cin >> t;
  int first = -1;
  int last = -1;
    for (i = 0; i < n; i++)
    {
        if (a[i] == t)
        {
            if (first == -1) {
                first = i;
            }
            last = i;
        }
    }
    if (first != -1) {
        cout << "First occurrence of " << t << " is at index " << first << endl;
        cout << "Last occurrence of " << t << " is at index " << last << endl;
    }
    else {
        cout << "Element " << t << " not found" << endl;
    }
}

int main()
{
    LinearSearch l;
    int choice, first, last;
    do
    {
        cout << "\nMenu\n";
        cout << "1. Accept\n";
        cout << "2. Search\n";
        cout << "3. Count\n";
        cout << "4. First and Last Occurrences\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            l.accept();
            break;
        case 2:
            l.search();
            break;
        case 3:
            l.count();
            break;
        case 4:
            l.firstAndLastOccurrence();
            break;
        case 5:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);

    return 0;
}
#include<iostream>
using namespace std;

int n; 
class dqueue
{
public:
    int ele;
    int front = -1, rear = -1;
    
    void insertFront();  
    void insertRear();   
    void deleteFront();  
    void deleteRear();   
    int getFront();     
    int getRear();      
} a[100];  

void dqueue::insertFront()
{
    if (rear==n-1 && front==0)
    {
        cout << "Queue is full..!!" << endl;
    }

    cout << "Enter element to insert at front: ";
    cin >> ele;

    if (front==-1 && rear==-1)
    {
        front=0; 
        rear=0;
    }
    else if (front == 0)
    {
        front = n - 1; 
    }
    else
    {
        front--;
    }

    a[front].ele = ele;
}

void dqueue::insertRear()
{
   if (rear==n-1 && front==0)

    {
        cout << "Queue is full..!!" << endl;
    }

    cout << "Enter element to insert at rear: ";
    cin >> ele;

    if (rear == -1)
    {
        front = rear = 0;
    }
    else if (rear == n - 1)
    {
        rear = 0;  
    }
    else
    {
        rear++;
    }

    a[rear].ele = ele;
}


void dqueue::deleteFront()
{
    if (front==-1 && rear==-1)
    {
        cout << "Queue is empty!" << endl;
        return;
    }

    cout << "Deleted element from front: " << a[front].ele << endl;

    if (front == rear)
    {
        front=-1;
        rear= -1;  
    }
    else if (front == n - 1)
    {
        front = 0;  
    }
    else
    {
        front++;
    }
}

void dqueue::deleteRear()
{
    if (front==-1 && rear==-1)
    {
        cout << "Queue is empty!" << endl;
        return;
    }

    cout << "Deleted element from rear: " << a[rear].ele << endl;

    if (front == rear)
    {
        front = rear = -1;  
    }
    else if (rear == 0)
    {
        rear = n - 1;  
    }
    else
    {
        rear--;
    }
}


int dqueue::getFront()
{
    if (front==-1 && rear==-1)
    {
        cout << "Queue is empty!" << endl;
        return -1;
    }
    return a[front].ele;
}


int dqueue::getRear()
{
    if (rear==-1 && front==-1)
    {
        cout << "Queue is empty!" << endl;
        return -1;
    }
    return a[rear].ele;
}

int main()
{
    cout << "Enter the size of the deque: ";
    cin >> n;

    int ch;
    do
    {
        cout << "\nEnter choice:" << endl;
        cout << "1. Insert at front" << endl;
        cout << "2. Insert at rear" << endl;
        cout << "3. Delete from front" << endl;
        cout << "4. Delete from rear" << endl;
        cout << "5. Get front element" << endl;
        cout << "6. Get rear element" << endl;
        cout << "0. Exit" << endl;
        cin >> ch;

        switch (ch)
        {
            case 1:
                a[0].insertFront(); 
                break;
            case 2:
                a[0].insertRear();  
                break;
            case 3:
                a[0].deleteFront(); 
                break;
            case 4:
                a[0].deleteRear();   
                break;
            case 5:
                cout << "Front element: " << a[0].getFront() << endl;
                break;
            case 6:
                cout << "Rear element: " << a[0].getRear() << endl;
                break;
            case 0:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
                break;
        }
    } while (ch != 0);

    return 0;
}

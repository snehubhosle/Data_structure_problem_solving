#include <iostream>
using namespace std;

int n;  

class Pizza
 {
    private:
        int time=10,totalTime;
        int r = -1, f = -1, first = 0, quant, Tot_price;
        string name, add;

    public:
        void takeOrders();
        void serveOrders();
        void displayOrders();
        void confirm();
} a[100]; 

void Pizza::confirm()
{
int confirm;
        cout << "Please confirm your order (1/0): ";
        cin >> confirm;
        
        if (confirm == 1)
        {
            cout << "Your order is confirmed and will be delivered in " <<totalTime << " minutes.\n";
        } 
        else if(confirm== 0) 
        {
            cout << "Your order is cancelled.\n";
           
            r = -1;
            f = -1;
            return;
        }
        else
        {
            cout<<"please enter valid No..!!";
        }
} 

void Pizza::takeOrders()
  {     
    if (r == -1 && f == -1) 
     {  
        f = 0, r = 0;
        cout << "Congratulations! You are our first customer, you get a 10% discount.\n";
        first = 1;
        cout << "Enter Name, Address, and Quantity:\n";
        cin >> a[r].name >> a[r].add >> a[r].quant;
        
       
        a[r].Tot_price = (a[r].quant * 100) - (a[r].quant * 100) * 0.1;
        
        int totalTime = time * a[r].quant; 
        cout << "Your pizza will be ready in " << totalTime << " minutes\n";
        a[r].confirm();
    
        
    } 
    else if ((r == n - 1 && f == 0) || (r + 1) % n == f)
      {  
        cout << "Orders are full.\n";
    } 
    else  {  
        r = (r + 1) % n;
        cout << "Enter Name, Address, and Quantity:\n";
        cin >> a[r].name >> a[r].add >> a[r].quant;
  
        if (first == 1) 
        {
            a[r].Tot_price = a[r].quant * 100;
        }
        
        int totalTime = time * a[r].quant;  
        cout << "Your pizza will be ready in " << totalTime << " minutes\n";
        a[r].confirm();
       
    }
}


void Pizza::serveOrders()
 {
    if (f == -1) 
    {  
        cout << "No orders to serve.\n";
    } 
    else if (f == r)
    {  
        cout << "Order served: " << a[f].name << "\t" << a[f].add << "\t" << a[f].quant << "\n"
             << "Total Price: " << a[f].Tot_price << "\n";
        f = r = -1; 
    } 
    else
    {  
        cout << "Order served: " << a[f].name << "\t" << a[f].add << "\t" << a[f].quant << "\n"
             << "Total Price: " << a[f].Tot_price << "\n";
        f = (f + 1) % n;
    }
}

void Pizza::displayOrders() 
{
    if (f == -1) 
    {
        cout << "No orders to display.\n";
    }
     else 
    {
        int i = f;
        cout<<"Name"<<"\t"<<"Address"<<"\t"<<"\t"<<"Quantity"<<"\t"<<"Price\n";
        while (i != r) {
            cout << a[i].name << "\t" << a[i].add <<"\t" <<"\t"<< a[i].quant <<"\t"<<"\t"<< a[i].Tot_price << "\n";
            i = (i + 1) % n;
        }
        cout << a[i].name << "\t" << a[i].add << "\t" <<"\t"<< a[i].quant  <<"\t"<<"\t"<<a[i].Tot_price << "\n";
    }
}

int main() {
    int ch;
    cout << "Enter the size of the queue: ";
    cin >> n;

    do {
        cout << "\n1. Take Orders\n2. Serve Orders\n3. Display Orders\n0. Exit\n";
        cin >> ch;
        switch (ch)
         {
        case 1:
            for(int i=0;i<n;i++)
            {
            a[0].takeOrders();
            }
            break;
        case 2:
            a[0].serveOrders();
            break;
        case 3:
            a[0].displayOrders();
            break;
        case 0:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (ch != 0);

    return 0;
}

/*to create an function template for  selection sort that can sort array of various types such as integer ,float and character .*/
#include <iostream>
using namespace std;
int n;
template <class T> // templet function allows the function to work with diff data types in single function//
void selsort(T a[], int n) // selsort sorts the array of any data type ,T represent the type
{
    T temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
}
int main()
{
int ch;
cout<<"enter the size of array\n";
cin>>n;
int a[n];
cout<<"enter the array elements of integer type\n";
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
float b[n];
cout<<"enter the array elements of float  type\n";
for(int i=0;i<n;i++)
{
    cin>>b[i];
}
char c[n];
cout<<"enter the array elements of character type\n";
for(int i=0;i<n;i++)
{
    cin>>c[i];
}

do{
cout<<"1.ineteger sorting\n2.float sorting \n3.character sorting\n";
cin>>ch;
switch(ch)
{
    case 1:selsort(a,n);
    break;
    case 2:selsort(b,n);
    break;
    case 3:selsort(c,n);
    break;
}
}
while(ch!=0);
return 0;
}

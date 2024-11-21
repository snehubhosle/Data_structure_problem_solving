#include<iostream>
using namespace std;
class TV
{
 string model;
 float screen_size;
 float price;
 public:
TV():model(""),screen_size(0.0),price(0.0)
{}
friend istream& operator>>(istream& in,TV&tv)
{
    cout<<"enter model number:";
    cin>>tv.model;
    if(tv.model.length()>4)
    {
        throw 1;
    }
    cout<<"Enter the screen size in inches between 12 to 70:";
    cin>>tv.screen_size;
    if(tv.screen_size<12 || tv.screen_size>70)
    {
        throw 2;
    }
    cout<<"Enter tv price (0-50000):";
    cin>>tv.price;
    if(tv.price <0 || tv.price>50000)
    {
        throw 3;
    }
    return in;
}
friend ostream& operator<<(ostream& out, const TV&tv)
{
    out<<"model number:"<<tv.model<<endl;
    out<<"screen size:"<<tv.screen_size<<endl;
    out<<"price($):"<<tv.price<<endl;
    return out;
}
};

int main()
{
    TV tv;
    try
    {
        cin>>tv;
        cout<<endl;
        cout<<tv;
    }
    catch(int e)
    {
       cout<<"exception caught.invalid input provided."<<endl;
       cout<<"resetting all values to zero."<<endl;
       tv= TV();
       cout<<endl<<"TV details after reset:"<<endl;
       cout<<tv;
    }
    return 0;

}
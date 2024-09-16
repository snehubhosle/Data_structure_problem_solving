#include<iostream>
#include<string>
using namespace std;
int n;
class book{
    public:
    int cost;
    string tittle;
    string author;
public:
    void accept();
    void display();
    void assending();
   void dessending();
   void lessthan500();
   void greaterthan500();
   void witharray();
   void withoutarray();
   
}b[100],c[100];

void book::accept(){
    cout<<"\nenter the tittle of book";
    cin>>tittle;
    cout<<"enter the author";
    cin>>author;
    cout<<"enter the cost";
    cin>>cost;
    
}
void book::display(){
 
        cout<<"\n"<<tittle<<"\t"<<author<<"\t"<<cost;
    }


void book::assending(){
    book t;  
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(b[i].cost>b[j].cost)
            {
             t=b[i];
             b[i]=b[j];
             b[j]=t;
            }
        
    }
        cout<<"\n"<<b[i].tittle<<"\t"<<b[i].author<<"\t"<<b[i].cost;   
    }
}   
void book::dessending(){
    book t;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(b[i].cost<b[j].cost)
            {
             t=b[j];
             b[j]=b[i];
             b[i]=t;
            }
        }
    cout<<"\n"<<b[i].tittle<<"\t"<<b[i].author<<"\t"<<b[i].cost;
    }
}
void book:: lessthan500(){
for(int i=0;i<n;i++){
    if(b[i].cost<500)
    {
      cout<<"\n"<<b[i].tittle<<"\t"<<b[i].author<<"\t"<<b[i].cost;
    }
}
}
void book::greaterthan500(){
int d=0;
for(int i=0;i<n;i++){
    if(b[i].cost>500)
    {
      cout<<"\n"<<b[i].tittle<<"\t"<<b[i].author<<"\t"<<b[i].cost;
      d++;
    }
}
cout<<"\ncount of books greter than 500"<<d;
}

void book ::witharray(){
int j=0;
c[0]=b[0];
for(int i=1;i<n;i++)
{
        if((b[i].tittle!=c[j].tittle) && (b[i].author!=c[j].author))
        {
            j++;
            c[j]=b[i];
        }
    
}
for(int i=0;i<=j;i++)
{
  cout<<"\n"<<c[i].tittle<<"\t"<<c[i].author<<"\t"<<c[i].cost;  
}
}
void book::withoutarray(){
int j=0;
for(int i=0;i<n;i++)
{
        if(b[i].tittle!=b[j].tittle && b[i].author!=b[j].author)
        {
            j++;
            b[j]=b[i];
        }
    
}
for(int i=0;i<=j;i++)
{
  cout<<"\n"<<b[i].tittle<<"\t"<<b[i].author<<"\t"<<b[i].cost;  
}
}


int main(){
    cout<<"how many records you want to add";
    cin>>n;
    int ch;
    do{
        cout<<"\n1.accept\n2.display\n3.assending\n4.dessding\n5.books less than 500\n6.count of books greter than 5000\n7.remove the duplicate enteries with array \n8.remove duplicates without the extra array\n9.end"<<endl;
        cout<<"\nwhich operation youo want to perform"<<endl;
        cin>>ch;
        switch(ch){  
            case 1:for(int i=0;i<n;i++){
                b[i].accept();
            }
            break;
            case 2:
          
            cout<<"\n"<<"title"<<"\t"<<"author"<<"\t"<<"cost"<<endl;
            for(int  i=0;i<n;i++){
                b[i].display();
            }  
            break;
            case 3:int i;
                b[i].assending();
                  break;
                  case 4:b[i].dessending();
                  break;
                  case 5:b[i].lessthan500();
                  break;
                  case 6:b[i].greaterthan500();
                  break;
                  case 7:b[i].witharray();
                  break;
                   case 8:b[i].withoutarray();
                   break;
           case 9:cout<<"existing";
            default:cout<<"loop end";     
        }

    }
    while(ch!=9);
}
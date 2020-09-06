#include<iostream>
#include<iomanip>
#include<conio.h>
#include<stdlib.h>

using namespace std;

class selec
{
    int a[20];
    int n,x;
public:
    selec();
    void selection();
    void print();
};

selec :: selec()
{
    cout<<"\nHow many no";
    cin>>n;
    cout<<"\nEnter your number";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}

void selec :: selection()
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                x=a[i];
                a[i]=a[j];
                a[j]=x;
            }
        }
    }
}

void selec :: print()
{
    cout<<"\nYour sorted numbers are:-";
    for(int i=0;i<n;i++)
    {
        cout<<endl<<a[i];
    }
}

int main()
{
    selec s1;
    s1.selection();
    s1.print();
    getch();
    return 2;
}

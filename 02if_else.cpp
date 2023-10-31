//if, else, else if

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout<<"Enter three numbers\t:\t";
    cin>>a>>b>>c;
    
    if(a > b && a > c)
    {
        cout<<"a is greater than b and c......!"<<a<<endl;
    }
    else if(b > a && b > c)
    {
        cout<<"b is greater than a and c.......!"<<b<<endl;
    }
    else
    {
        cout<<"c is greater than a and b.......!"<<c<<endl;
    }
    
    
    //using expressional operator find the maximum value among three numbers
    int result = a > b ? (a > c ? a : c) : (b > c ? b : c);
    cout<<result<<endl;
return 0;
}
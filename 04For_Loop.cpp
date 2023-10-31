#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter the number\t:\t";
    cin>>num;
    
    for(int i = 1; i <= 10; i++)
    {
        cout<<num * i<<endl;
    }
return 0;
}
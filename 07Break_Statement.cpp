#include <iostream>

using namespace std;

int main()
{
    int num = 1;
    do
    {
        cout<<num<<endl;
        if(num == 5)  //condition match then break from this scope....
        {
            break;
        }
    }while(num++ < 10);
    cout<<"after break program will be start executing from here"<<endl;
return 0;
}
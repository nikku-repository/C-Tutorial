#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int MyNumber, count;
    srand(time(0));
    int num = rand()%100;
    cout<<"Enter the number\t:\t";
    cin>>MyNumber;
    while(true)
    {
        count++;
        if(num == MyNumber)
        {
            cout<<"Thanku..............!"<<endl;
            cout<<"Number Matched in "<<count<<"iteration.....!";
            exit(0);
        }
        else if(num > MyNumber)
        {
            cout<<"Number is Too High.....!"<<endl;
        }
        else
        {
            cout<<"Number is Too low.......!"<<endl;
        }
        cout<<"Please Enter again\t:\t";
        cin>>MyNumber;
    }
return 0;
}

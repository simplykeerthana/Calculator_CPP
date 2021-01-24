#include <iostream>
#include <Calc.h>

using namespace std;

int main()
{
    int sentinal = 0;

    do{

        cout << "Please enter the number of expressions you would like to stor: " << endl;
        int values;

        if(values <1)
        {
            cout << "Error: Number of stored expressions must be positive" << endl;
        }
        else
        {
            calc1.print();
            cout << "Press 1 to continue" << endl;
            cin >> sentinal;
        }
        
    
    }
    while(sentinal ==1);

    return 0;
}
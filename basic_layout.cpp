
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream coutf("outputtxt.txt");
    ifstream cinf("inputtxt.txt");

    if (cinf.is_open())
    {
        int T;
        cinf >> T;
        while (T--)
        {
            int X;
            cinf >> X;
            if (X > 30)
            {
                coutf << "yes" << endl;
            }
            else
            {
                coutf << "no" << endl;
            }
        }
    }
    else
    {
        cout << "Unable to open file";
    }
    coutf.close();
    cinf.close();
    return 0;
}

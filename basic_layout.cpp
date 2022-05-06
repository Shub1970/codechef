
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream coutf("outputtxt.txt");
    ifstream cinf("inputtxt.txt");

    if (cinf.is_open())
    {

        int t;
        cinf >> t;
        while (t--)
        {
            int X, Y;
            cinf >> X >> Y;
            if ((abs(X - Y) == 0) && (X > 0) || (Y > 0))
            {
                coutf << "YES" << endl;
            }
            else
            {
                coutf << "NO" << endl;
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

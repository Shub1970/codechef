
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream coutf("outputtxt.txt");
    ifstream cinf("inputtxt.txt");

    if (cinf.is_open())
    {

        int t, n;
        cinf >> t >> n;
        while (t--)
        {
            int X, Y;
            cin >> X >> Y;
            if ((abs(X - Y) == 0) && (X > 0) || (X > 0))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    else
    {
        cout << "Unable to open file";
    }
    return 0;
}

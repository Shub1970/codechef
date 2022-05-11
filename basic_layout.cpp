
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream coutf("outputtxt.txt");
    ifstream cinf("inputtxt.txt");

    if (cinf.is_open())
    {
        int test;
        cinf >> test;
        while (test--)
        {
            int n, x, k;
            cinf >> n >> x >> k;
            if (n * x <= k)
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

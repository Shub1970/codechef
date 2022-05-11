
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
            int a, b, c;
            cinf >> a >> b >> c;
            if (a + b < c || a + c < b || b + c < a)
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


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
            int N;
            cinf >> N;
            double profit = static_cast<double>(30) / 100 * N * 50;
            coutf << profit << endl;
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

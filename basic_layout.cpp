
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
            int fastest_finist, chef_finist;
            cinf >> fastest_finist >> chef_finist;
            double per = static_cast<double>(107) / 100 * fastest_finist;
            if (chef_finist <= per)
            {
                coutf << "yes" << endl;
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

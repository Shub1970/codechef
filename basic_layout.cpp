
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main()
{
    ofstream coutf("outputtxt.txt");
    ifstream cinf("inputtxt.txt");
    vector<int> v;
    if (cinf.is_open())
    {
        {
            int i;
            while (cinf >> i)
            {
                v.push_back(i);
            }
            cinf.close();
        }
    }
    else
    {
        cout << "Unable to open file";
    }
    for (int i = 0; i < v.size(); i++)
    {
        coutf << v[i] << endl;
    }
}

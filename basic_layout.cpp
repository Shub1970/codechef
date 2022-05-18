
#include <iostream>
#include <fstream>
using namespace std;
int mods(int a, int b, int M)
{
    if (a >= b)
    {
        return (a - b) % M;
    }
    else
    {
        return ((a - b) % M + M) % M;
    }
}
int main()
{
    ofstream coutf("outputtxt.txt");
    ifstream cinf("inputtxt.txt");

    if (cinf.is_open())
    {
        }
    else
    {
        coutf << "Unable to open file";
    }
    coutf.close();
    cinf.close();
    return 0;
}

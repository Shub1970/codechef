
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
        int test;
        cinf >> test;
        while (test--)
        {
            int size;
            cinf >> size;
            int start38 = 0;
            int ltime108 = 0;
            while (size--)
            {
                string temp;
                cinf >> temp;
                if (temp == "START38")
                {
                    start38++;
                }
                else
                {
                    if (temp == "LIGHT108")
                    {
                        ltime108++;
                    }
                }
            }
        }
    }
    else
    {
        coutf << "Unable to open file";
    }
    coutf.close();
    cinf.close();
    return 0;
}

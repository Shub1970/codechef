
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
            int current_rating;
            cinf >> current_rating;
            int final_rating;
            cinf >> final_rating;
            if ((final_rating - current_rating) % 8 == 0)
            {
                coutf << (final_rating - current_rating) / 8 << endl;
            }
            else
            {
                coutf << (final_rating - current_rating) / 8 + 1 << endl;
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

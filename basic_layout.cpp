
#include <iostream>
#include <fstream>
#include <unordered_map>
#include <vector>
#include <set>
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
            int initial_level, max_capacity, speed, time;
            cinf >> initial_level >> max_capacity >> speed >> time;
            int space = max_capacity - initial_level;
            int extra_water = speed * time;
            if (space == extra_water)
            {
                coutf << "filled" << endl;
            }
            else if (space > extra_water)
            {
                coutf << "unfilled" << endl;
            }
            else
            {
                coutf << "overFlow" << endl;
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

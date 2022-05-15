
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

            int array_length;
            cinf >> array_length;
            int remove_problem = 0;
            int *array = new int[array_length];
            for (int i = 0; i < array_length; i++)
            {
                cinf >> array[i];
            }
            for (int i = 0; i < array_length; i++)
            {
                if (array[i] >= 1000)
                {
                    remove_problem++;
                }
            }
            coutf << remove_problem << endl;
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

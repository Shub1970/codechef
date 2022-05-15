
#include <iostream>
#include <fstream>
#include <unordered_map>
#include <vector>
#include <set>
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
            int array_size, M;
            cinf >> array_size >> M;
            int *arr = new int[array_size];
            for (int i = 0; i < array_size; i++)
            {
                cinf >> arr[i];
            }
            int max_value = 0;
            for (int i = 0; i < array_size; i++)
            {
                for (int j = i + 1; j < array_size; j++)
                {
                    int temp = mods(arr[i], arr[j], M);
                    if (temp > max_value)
                    {
                        max_value = temp;
                    }
                }
            }
            coutf << max_value << endl;
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

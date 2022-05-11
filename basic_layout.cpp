
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
            int length;
            cinf >> length;
            vector<int> A;
            vector<int> B;
            int ans = 0;
            for (int i = 0; i < length; i++)
            {
                int temp;
                cinf >> temp;
                A.push_back(temp);
            }
            for (int i = 0; i < length; i++)
            {
                int temp;
                cinf >> temp;
                B.push_back(temp);
            }
            unordered_map<int, vector<int>> stairs;
            for (int i = 0; i < length; i++)
            {
                stairs[A[i]].push_back(i);
            }
            for (int i = 0; i < length; i++)
            {
                if (stairs[B[i]].size() > 0)
                {
                    for (auto r : stairs[B[i]])
                    {
                        if (r != i)
                        {
                            ans++;
                        }
                    }
                }
                else
                {
                    continue;
                }
            }
            coutf << ans / 2 << endl;
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

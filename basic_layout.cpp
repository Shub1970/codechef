
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
        cin >> test;
        while (test--)
        {
            int total_problem, total_solve;
            cin >> total_problem >> total_solve;
            cout << total_problem - total_solve << endl;
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

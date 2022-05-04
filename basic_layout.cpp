/*
Roller Coaster Problem Code: MINHEIGHT
Add problem to Todo list
Submit
Chef's son wants to go on a roller coaster ride. The height of Chef's son is X inches while the minimum height required to go on the ride is H inches. Determine whether he can go on the ride or not.

Input Format
The first line contains a single integer T - the number of test cases. Then the test cases follow.
The first and only line of each test case contains two integers X and H - the height of Chef's son and the minimum height required for the ride respectively.

*/
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

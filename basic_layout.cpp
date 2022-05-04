/*
Infernos Problem Code: INFERNO
Add problem to Todo list
Submit
Ved started playing a new mobile game called Fighting Clans. An army of N enemies is approaching his base. The ith enemy has Hi health points. An enemy gets killed if his health points become 0.
Ved defends his base using a weapon named Inferno. He can set the Inferno to one of the following two modes:

Single-Target Mode: In one second, the Inferno can target exactly one living enemy and cause damage of at most X health points.
Multi-Target Mode: In one second, the Inferno can target all living enemies and cause damage of 1 health point to each of them.
Find the minimum time required to kill all the enemies.

Note: Ved is not allowed to change the mode of the weapon once it is set initially.

Input Format
The first line contains a single integer T - the number of test cases. Then the test cases follow.
The first line of each test case contains two integers N and X - the number of enemies and the damage caused by the single-target mode of Inferno in one second respectively.
The second line of each test case contains N space-separated integers H1,H2,…,HN where Hi denotes the initial health points of ith enemy..
*/
#include <iostream>
#include <vector>
#include <numeric>
#include <fstream>
using namespace std;
bool for_each(vector<int>::iterator beg, vector<int>::iterator end)
{
    bool test = true;
    for (; beg != end; ++beg)
    {
        if (*beg > 0)
        {
            test = false;
            break;
        }
    }
    return test;
}

int main()
{
    ofstream coutf("outputtxt.txt");
    ifstream cinf("inputtxt.txt");

    if (cinf.is_open())
    {

        int t;
        cinf >> t;
        while (t--)
        {
            int n, x;
            cinf >> n >> x;
            vector<int> h(n);
            for (auto &i : h)
            {
                cinf >> i;
            }
            int max = 0;
            for (auto i : h)
            {
                if (i > max)
                    max = i;
            }
            int tim = 0;
            while (!for_each(h.begin(), h.end()))
            {
                for (auto &i : h)
                {
                    if (i > 0)
                    {
                        i -= x;
                        tim++;
                    }
                }
            }
            if (max > tim)
            {
                coutf << tim << endl;
            }
            else
            {
                coutf << max << endl;
            }
        }
    }
    else
    {
        cout << "Unable to open file";
    }
    return 0;
}

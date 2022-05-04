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
#include <map>
#include <fstream>
using namespace std;

int main()
{
    ofstream coutf("outputtxt.txt");
    ifstream cinf("inputtxt.txt");
    if (cinf.is_open())
    {
        
    }
    else
    {
        cout << "Unable to open file";
    }
    return 0;
}

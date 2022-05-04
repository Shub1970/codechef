/*
Chef wants to buy a new laptop. However, he is confused about which laptop to buy out of 10 different laptops. He asks his N friends for their recommendation. The ith friend recommends the Chef to buy the Aithlaptop (1≤Ai≤10).

Chef will buy the laptop which is recommended by maximum number of friends. Determine which laptop Chef buys.
Print CONFUSED if there are multiple laptops having maximum number of recommendations.

Input Format
The first line contains a single integer T - the number of test cases. Then the test cases follow.
The first line of each test case contains an integer N - the number of Chef's friends.
The second line of each test case contains N space-separated integers A1,A2,…,AN where Ai denotes the recommendation of the ith friend.
*/
#include <iostream>
#include <vector>
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


#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
pair<int, int> range(char a)
{
    int left;
    int right;
    char range[5]{'a', 'e', 'i', 'o', 'u'};
    if (a < 'v')
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 1; j <= 4; j++)
            {
                if (range[i] <= a && a <= range[j])
                {
                    left = static_cast<int>(a - range[i]);
                    right = static_cast<int>(range[j] - a);
                    break;
                }
            }
        }
    }
    else
    {
        left = a - 'u';
        right = 130 - a;
    }
    return make_pair(left, right);
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
            int size;
            cinf >> size;
            string st;
            cinf >> st;
            long long int n = 1;
            for (auto x : st)
            {
                if (x != 'a' || x != 'e' || x != 'i' || x != 'o' || x != 'u')
                {
                    if (range(x).first == range(x).second)
                    {
                        n = n * 2;
                    }
                }
            }
            return n % (1000000007);
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

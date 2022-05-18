
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
        int test;
        cinf >> test;
        while (test--)
        {
            int no_frame;
            cinf >> no_frame;
            vector<int> frame;
            while (no_frame--)
            {
                int temp;
                cinf >> temp;
                frame.push_back(temp);
            }
            int min_frame = 0;
            int repeat_frame = 0;
            for (auto x : frame)
            {
                if (x != repeat_frame)
                {
                    repeat_frame = x;
                    min_frame++;
                }
                else
                {
                    continue;
                }
            }
            coutf << min_frame << endl;
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

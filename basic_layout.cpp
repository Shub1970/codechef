
#include <iostream>
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
            int Length_of_track, initial, final;
            cinf >> initial >> final >> Length_of_track;
            int forward_length = abs(final - initial);
            int bakward_length = abs(Length_of_track - forward_length);
            if (forward_length > bakward_length)
            {
                coutf << bakward_length << endl;
            }
            else
            {
                coutf << forward_length << endl;
            }
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

/*
The Mango Truck Problem Code: MANGOES
Add problem to Todo list
Submit
You are given that a mango weighs X kilograms and a truck weighs Y kilograms. You want to cross a bridge that can withstand a weight of Z kilograms.

Find the maximum number of mangoes you can load in the truck so that you can cross the bridge safely.

Input Format
First line will contain T, the number of test cases. Then the test cases follow.
Each test case consists of a single line of input, three integers X,Y,Z - the weight of mango, the weight of truck and the weight the bridge can withstand respectively.
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
        int count;
        cinf >> count;
        while (count--)
        {
            int X, Y, Z;
            cinf >> X >> Y >> Z;
            int out = static_cast<int>((Z - Y) / X);
            coutf << out << endl;
        }
    }
    else
    {
        cout << "Unable to open file";
    }
    return 0;
}

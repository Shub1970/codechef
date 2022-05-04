/*
Beat the Average Problem Code: ABOVEAVG
Add problem to Todo list
Submit
There are N students in a class. Recently, an exam on Advanced Algorithms was conducted with maximum score M and minimum score 0. The average score of the class was found out to be exactly X.

Given that a student having score strictly greater than the average receives an A grade, find the maximum number of students that can receive an A grade.

Input Format
First line will contain T, number of test cases. Then the test cases follow.
The only line of each test case consists of three integers N,M,X - the number of students, the maximum score and the average score respectively.
*/
#include <iostream>
#include <vector>
#include <numeric>
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

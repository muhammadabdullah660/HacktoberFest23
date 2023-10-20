#include <iostream>
using namespace std;
int Greater(int a, int b, int c, int d);

/*
URL: https://www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true
*/

int main()
{
    int result = Greater(3,4,6,5);
    cout << "Greater number is: " << result;
    return 0;
}
int Greater(int a, int b, int c, int d)
{
    if ((a > b) && (a > c) && (a > d))
    {
        return a;
    }
    else if ((b > a) && (b > c) && (b > d))
    {
        return b;
    }
    else if ((c > a) && (c > b) && (c > d))
    {
        return c;
    }
    else if ((d > a) && (d > b) && (d > c))
    {
        return d;
    }
}
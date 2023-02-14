#include <iostream>
using namespace std;

class solution
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }
};

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        solution sol;
        cout << "Sum of 10 and 12 is: " << sol.sum(10, 12);
    }
    return 0;
}
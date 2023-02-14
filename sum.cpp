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
        cout << "Sum of 3 and 4 is: " << sol.sum(3, 4);
    }
    return 0;
}
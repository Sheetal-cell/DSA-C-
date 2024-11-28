


#include <iostream>
using namespace std;


bool isPowerOfTwo(int n)
{
    if (n == 0)
        return 0;
    while (n != 1) {
        if (n % 2 != 0)
            return 0;
        n = n / 2;
    }
    return 1;
}


int main()
{
    int num;
    cin>>num;
    // Function call
    isPowerOfTwo(num) ? cout << "Yes\n" : cout << "No\n";

    return 0;
}


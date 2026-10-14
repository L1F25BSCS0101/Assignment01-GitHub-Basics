/*
 * Program : Sum of First 50 Even Numbers
 * Name    : Murtaza Rasheed
 * Reg No. : L1F25BSCS0101
 * Assignment: Sum of 50 even numbers using a loop
 */

#include <iostream>
using namespace std;

int main()
{
    const int N = 50;
    int sum = 0;

    // Add the first 50 even numbers: 2, 4, 6, ..., 100
    for (int i = 1; i <= N; i++)
    {
        sum += 2 * i;
    }

    cout << "Sum of first " << N << " even numbers: " << sum << endl;

    return 0;
}

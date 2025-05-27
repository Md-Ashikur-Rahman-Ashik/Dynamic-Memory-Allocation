#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int integerArray[5];

    int *integerArray = new int[5];

    for (int i = 0; i < 5; i++)
    {
        /* code */
        cin >> integerArray[i];
    }

    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout << integerArray[i] << " ";
    }

    return 0;
}
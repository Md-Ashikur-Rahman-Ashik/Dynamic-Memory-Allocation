#include <bits/stdc++.h>
using namespace std;

int *staticArray()
{
    int *integerArray = new int[5];
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cin >> integerArray[i];
    }

    return integerArray;
}

int main()
{
    int *integerArray = staticArray();
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout << integerArray[i] << " ";
    }

    return 0;
}
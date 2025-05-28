#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *integerArray = new int[3];
    for (int i = 0; i < 3; i++)
    {
        /* code */
        cin >> integerArray[i];
    }

    int *secondArray = new int[5];
    for (int i = 0; i < 3; i++)
    {
        /* code */
        secondArray[i] = integerArray[i];
    }

    delete[] integerArray;

    for (int i = 3; i < 5; i++)
    {
        /* code */
        cin >> secondArray[i];
    }

    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout << secondArray[i] << " ";
    }

    return 0;
}
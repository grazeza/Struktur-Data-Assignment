#include <iostream>

using namespace std;

int main()
{
    // deklarasi array
    int arr[2][3][3];

    // input elemen
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = " << ends;
                cin >> arr[x][y][z];
            }
        }

        cout << endl;
    }

    // input elemen
    cout << endl;
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << ends;
                cout << endl;
            }
        }

        cout << endl;
    }

    // output array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << arr[x][y][z] << " " << ends;
            }

            cout << endl;
        }

        cout << endl;
    }
}
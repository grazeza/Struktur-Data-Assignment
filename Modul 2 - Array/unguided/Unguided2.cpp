#include <iostream>

using namespace std;

int main()
{
    int d1, d2, d3;
    for (int i = 1; i <= 3; i++)
    {
        cout << "Masukkan indeks dimensi ke-" << i << ": ";
        if (i == 1)
        {
            cin >> d1;
        }
        else if (i == 2)
        {
            cin >> d2;
        }
        else
        {
            cin >> d3;
        }
    }
    cout << endl;

    // deklarasi array
    int arr[d1][d2][d3];

    // input elemen
    for (int x = 0; x < d1; x++)
    {
        for (int y = 0; y < d2; y++)
        {
            for (int z = 0; z < d3; z++)
            {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = " << ends;
                cin >> arr[x][y][z];
            }
        }

        cout << endl;
    }

    // input elemen
    cout << endl;
    for (int x = 0; x < d1; x++)
    {
        for (int y = 0; y < d2; y++)
        {
            for (int z = 0; z < d3; z++)
            {
                cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << ends;
                cout << endl;
            }
        }

        cout << endl;
    }

    // output array
    for (int x = 0; x < d1; x++)
    {
        for (int y = 0; y < d2; y++)
        {
            for (int z = 0; z < d3; z++)
            {
                cout << arr[x][y][z] << " " << ends;
            }

            cout << endl;
        }

        cout << endl;
    }
}
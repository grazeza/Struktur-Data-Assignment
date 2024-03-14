#include <iostream>

using namespace std;

int main()
{
    int data, indeks;
    int countGenap = 0, countGanjil = 0; // untuk indeks array genap dan ganjil
    cout << "Masukkan indeks array: ";
    cin >> indeks;

    int array[indeks], bilanganGenap[indeks], bilanganGanjil[indeks];
    for (int i = 0; i < indeks; i++)
    {
        cout << "Masukkan data ke-" << i + 1 << ": ";
        cin >> array[i];

        // pengecekan nilai ganjil atau genap
        if (array[i] % 2 == 0)
        {
            bilanganGenap[countGenap] = array[i];
            countGenap++;
        }
        else
        {
            bilanganGanjil[countGanjil] = array[i];
            countGanjil++;
        }
    }
    cout << endl;

    // menampilkan keseluruhan array
    cout << "Data Array : ";
    for (int i = 0; i < indeks; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    // menampilkan nomor genap
    cout << "Nomor Genap : ";
    for (int i = 0; i < countGenap; i++)
    {
        cout << bilanganGenap[i] << " ";
    }
    cout << endl;

    // menampilkan nomor ganjil
    cout << "Nomor Ganjil : ";
    for (int i = 0; i < countGanjil; i++)
    {
        cout << bilanganGanjil[i] << " ";
    }
    cout << endl;
}
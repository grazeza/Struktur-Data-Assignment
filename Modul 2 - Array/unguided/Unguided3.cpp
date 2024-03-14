#include <iostream>

using namespace std;

int indeks;
int input;
float rataRata;
int pilihanMenu;
int Min;
int Max;

int main()
{

    cout << "Masukkan indeks array: ";
    cin >> indeks;
    int bil[indeks];

    do
    {
        cout << endl;
        cout << "Menu" << endl;
        cout << "1. Input Array" << endl;
        cout << "2. Tampil Array" << endl;
        cout << "3. Cari Nilai Minimum" << endl;
        cout << "4. Cari Nilai Maksimum" << endl;
        cout << "5. Hitung Rata-rata" << endl;
        cout << "6. Exit" << endl;
        cout << "Masukkan Pilihan : ";
        cin >> pilihanMenu;

        switch (pilihanMenu)
        {
        case 1:
            cout << endl;
            for (int i = 0; i < indeks; i++)
            {
                cout << "Masukkan bilangan ke-" << i + 1 << " : ";
                cin >> input;

                bil[i] = input;
            }

            break;
        case 2:
            cout << endl;
            for (int i = 0; i < indeks; i++)
            {
                cout << bil[i] << ", ";
            }
            cout << endl;

            break;
        case 3:
            cout << endl;
            Min = bil[0];

            for (int i = 0; i < indeks; i++)
            {
                if (bil[i] < Min)
                {
                    Min = bil[i];
                }
            }
            cout << "Nilai Minimum : " << Min;
            cout << endl;

            break;
        case 4:
            cout << endl;
            Max = 0;

            for (int i = 0; i < indeks; i++)
            {
                if (bil[i] > Max)
                {
                    Max = bil[i];
                }
            }
            cout << "Nilai Maksimum : " << Max;
            cout << endl;

            break;
        case 5:
            cout << endl;

            for (int i = 0; i < indeks; i++)
            {
                rataRata += bil[i];
            }
            cout << "Rata rata : " << rataRata / indeks;
            cout << endl;
            cout << endl;

            break;
        case 6:
            return 0;
            break;
        default:
            cout << "Pilihan yang anda input tidak valid" << endl;
            break;
        };

    } while (pilihanMenu != 6);

    return 0;
}

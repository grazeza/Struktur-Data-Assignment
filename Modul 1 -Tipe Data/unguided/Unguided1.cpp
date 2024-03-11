#include <iostream>

using namespace std;

// fungsi cek even or odd number
void JenisAngka(int angka)
{
    if (angka % 2 == 0) // jika habis dibagi 2
    {
        cout << "Amgka yang anda inputkan merupakan angka genap" << endl;
    }
    else
    {
        cout << "Amgka yang anda inputkan merupakan angka ganjil" << endl;
    }
}

// fungsi banfing angka 1 dan angka 2
void Bandingkan(int angka1, int angka2)
{
    if (angka1 > angka2)
    {
        cout << "Angka pertama lebih besar daripada angka kedua" << endl;
    }
    else if (angka1 < angka2)
    {
        cout << "Angka kedua lebih besar daripada angka pertama" << endl;
    }
    else if (angka1 == angka2)
    {
        cout << "Angka pertama sama dengan angka kedua" << endl;
    }
}

int main()
{
    cout << "Fungsi Pertama" << endl;
    JenisAngka(789);
    JenisAngka(234);

    cout << "Fungsi Kedua" << endl;
    Bandingkan(3, 7);
    Bandingkan(123, 90);
    Bandingkan(4,4);
}
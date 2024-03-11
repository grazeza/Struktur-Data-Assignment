<center># Laporan Praktikum Modul Tipe Data</center>
<center>Fahreza Ilham Wicaksono</center>

## Dasar Teori
Tipe data merpukan pengelompokan data berdasarkan ciri-cirinya. Jenis ini mempunya fungsi yang berbeda-beda yang digunakan oleh compiler untuk mengetahui bagaimana sebuah data digunakan. Ada 3 tipe data yaitu primitif, abstak, dan koleksi.
### Tipe data Primitif
Tipe data primitif merupakan tipe data yang sudah ditentukan oleh program c++ itu sendiri. Contohnya yaitu int, float, string, boolean dan char.
### Tipe data Abstrak
Tipe data abstark adalah tipe data yang dibuat atau diciptakan oleh programmer itu sendiri.
### Tipe data Koleksi
Tipe data Koleksi merupakan tipe data yang digunakan untuk menyimpan data secara bersamaan di suatu variabel. Contohnya array, vector, dan map.

## Guided
### 1. Tipe data primitf
```
#include <iostream>

using namespace std;

int main()
{
    char op;
    float num1, num2;
    cout << "Masukkan jenis operator: ";
    cin >> op;
    cout << "Iputkan angka pertama: ";
    cin >> num1;
    cout << "Iputkan angka kedua: ";
    cin >> num2;

    switch (op)
    {
    case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '*':
        cout << num1 * num2;
        break;
    case '/':
        cout << num1 / num2;
        break;
    default:
        cout << "Error! operator is not valid" << endl;
    }

    return 0;
}
```
Kode diatas merupakan implementasi dari penggunaan tipe data primitif `float`, yang berfungsi seperti kalkulator sederhana.

### Tipe data abstark
```
#include <iostream>
#include <stdio.h>

using namespace std;

// struct
struct Mahasiswa
{
    const char *name;
    const char *address;
    int age;
};

int main()
{
    // inisialisasi struct
    struct Mahasiswa mhs1, mhs2;

    // pengisian value
    mhs1.name = "Fahreza";
    mhs1.address = "Ketenger";
    mhs1.age = 18;

    mhs2.name = "Evan";
    mhs2.address = "Semaya";
    mhs2.age = 19;

    // mencetak isi struct
    printf("## Mahasiswa 1 ##\n");
    printf("Nama: %s\n", mhs1.name);
    printf("Alamat: %s\n", mhs1.address);
    printf("Umur: %d\n", mhs1.age);
    printf("## Mahasiswa 2 ##\n");
    printf("Nama: %s\n", mhs2.name);
    printf("Alamat: %s\n", mhs2.address);
    printf("Umur: %d\n", mhs2.age);

    return 0;
}
```
Kode diatas merupakan implementasi tipe data abstak yaitu `struct`, yang berfungsi untuk menyimpan tipe data yang berbeda di suatu variabel.

### Tipe data koleksi
```
#include <iostream>

using namespace std;

int main()
{
    // deklarasi dan inisalisasi array
    int nilai[5];
    nilai[0] = 75;
    nilai[1] = 80;
    nilai[2] = 85;
    nilai[3] = 60;
    nilai[4] = 90;

    // mencetak array
    cout << "Isi array pertama :" << nilai[0] << endl;
    cout << "Isi array kedua :" << nilai[1] << endl;
    cout << "Isi array ketiga :" << nilai[2] << endl;
    cout << "Isi array keempat :" << nilai[3] << endl;
    cout << "Isi array kelima :" << nilai[4] << endl;
    return 0;
}
```
Kode diatas merupakan implementasi tipe data koleksi `array`, yang berfungsi untuk menyimpan berbagai data dengan tipe data yang sama di suatu variabel.

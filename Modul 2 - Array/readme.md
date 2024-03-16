# <h1 align="center"> Laporan Praktikum Modul Array </h1>
<p align="center"> Fahreza Ilham Wicaksono </p>


## Dasar Teori
Tipe data merpukan pengelompokan data berdasarkan ciri-cirinya. Jenis ini mempunya fungsi yang berbeda-beda yang digunakan oleh compiler untuk mengetahui bagaimana sebuah data digunakan. Ada 3 tipe data yaitu primitif, abstak, dan koleksi.
### - Tipe data Primitif
Tipe data primitif merupakan tipe data yang sudah ditentukan oleh program c++ itu sendiri. Contohnya yaitu int, float, string, boolean dan char.
### - Tipe data Abstrak
Tipe data abstark adalah tipe data yang dibuat atau diciptakan oleh programmer itu sendiri.
### - Tipe data Koleksi
Tipe data Koleksi merupakan tipe data yang digunakan untuk menyimpan data secara bersamaan di suatu variabel. Contohnya array, vector, dan map.

## Guided
### 1. Program Input Array Tiga Dimensi 
```c++
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
```
Kode diatas merupakan implementasi dari penggunaan tipe data primitif `float`, yang berfungsi seperti kalkulator sederhana.

### 2. Program Mencari Nilai Maksimal pada Array
```c++
#include <iostream>

using namespace std;

int main()
{
    int maks, a, i = 1, lokasi;
    cout << "Masukkan panjang array: ";
    cin >> a;

    int array[a];
    cout << "Masukkan " << a << " angka: \n";

    for (int i = 0; i < a; i++)
    {
        cout << "Array ke-" << (i) << ": ";
        cin >> array[i];
    }

    maks = array[0];

    for (int i = 0; i < a; i++)
    {
        if (array[i] > maks)
        {
            maks = array[i];
            lokasi = i;
        }
    }

    cout << "Nilai maksimum adalah " << maks << " berada di Array ke " << lokasi << endl;

    return 0;
}
```
Kode diatas merupakan implementasi tipe data abstak yaitu `struct`, yang berfungsi untuk menyimpan tipe data yang berbeda di suatu variabel.

## Unguided
### 1. Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!
``` c++
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
```
### Output
![Output 1](https://raw.githubusercontent.com/grazeza/Struktur-Data-Assignment/main/Modul%201%20-Tipe%20Data/gambar/Output1.png)
Kode diatas adalah contoh penggunaan dari tipe data primitif. Fungsi pertama digunakan untuk mengecek angka apakah ganjil atau genap sedangkan fungsi kedua untuk membandingkan antara angka pertama atau kedua. 
Kesimpulanya adalah tipe data ini merupakan tipe data default, yang mana tidak ada fleksibilitas dalam penggunaanya namun tipe data ini yang menjadi pondasi dari seluruh program c++.

### 2. Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!
``` c++
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
```
### Output
![Output 2](https://raw.githubusercontent.com/grazeza/Struktur-Data-Assignment/main/Modul%201%20-Tipe%20Data/gambar/Output2.png)
Class merupakan tipe data defaultnya adalah private, jadi jika objek anggota dari class itu sendiri ingin dipublikasikan, maka harus menyertakan public di potongan kode tersebut Sedangakan Struct atau structure merupakan tipe data yang menyimpan beberapa data dengan default public, Struktur bermanfaat untuk mengelompokan sejumlah data dengan tipe yang berlainan[1]. Kode diatas merupakan contoh penggunaan class dan struct, pada class menyertakan public agar kode bisa diakses di int main dan pada struct karena defaultnya public jadi langsung inisialisasi variabel.

### 3. Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata – rata dari suatu array dengan input yang dimasukan oleh user! 
```c++
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

```
### Output
![Output 3](https://raw.githubusercontent.com/grazeza/Struktur-Data-Assignment/main/Modul%201%20-Tipe%20Data/gambar/Output3.png)
Kode diatas merupakan penggunaan map dalam c++, dimulai dari insialisasi map beserta tipe datanya kemudian pengisian map pada int main lalu terakhir dengan perulangan for range based loop dengan menggunakan `auto` mencetak map tersebut. Perbedaan antara array dan map terletak pada tipe data indeks pada map yang memungkinkan untuk berupa tipe data selain integer[2].

## Kesimpulan
Tipe data adalah klasifikasi atau pengelompokan data berdasarkan sifat atau ciri-ciri tertentu. Setiap jenis tipe data memiliki fungsi yang berbeda-beda yang memungkinkan programmer untuk lebih leluasa membuat atau menciptakan suatu logika program yang lebih kompleks dan efisien juga digunakan oleh compiler untuk memahami cara data tersebut digunakan dalam program. Ada tiga tipe data utama, yaitu primitif, abstak, dan koleksi. 
- Tipe data primitif merupakan tipe data default yang menjadi pondasi
- Tipe data abstrak merupakan tipe data yang dibuat oleh programmer yang biasa digunakan di pemograman OOP.
- Tipe data kolektif merupakan tipe data yang digunakan untuk menyimpan data secara bersamaan.

## Referensi
[1] Akbar, Ramadhani. Struct dan Class. boltremjaya.wordpress.com; 2013. https://boltremjaya.wordpress.com/2013/09/16/struct-dan-class/

[2] Adam, Rian. TUTORIAL STRUKTUR DATA MAP PADA C++. structilmy.com; 2020. https://structilmy.com/blog/2020/08/08/tutorial-struktur-data-map-pada-c/

# <h1 align="center"> Laporan Praktikum Modul Array </h1>
<p align="center"> Fahreza Ilham Wicaksono </p>


## Dasar Teori
Array adalah struktur data mendasar yang terdiri dari elemen-elemen yang memiliki indeks numerik, dimulai dari 0 dan terus bertambah sesuai panjang data. Meskipun penggunaan memori array relatif sedikit, fleksibilitasnya terbatas. Berikut adalah beberapa tipe array yang umum digunakan:
### - Array Satu Dimensi
Array satu dimensi adalah kumpulan data dengan tipe yang sama yang disusun dalam suatu struktur. Dalam analogi tabel, array satu dimensi dapat dianggap sebagai tabel dengan hanya satu kolom dan beberapa baris. Setiap elemen dalam array memiliki indeks numerik yang dimulai dari 0 dan terus bertambah secara berurutan. 
### - Array Dua Dimensi
Sama seperti array satu dimensi, array dua dimensi berarti memunkinkan array untuk memiliki lebih dari satu kolom atau baris.
### - Array Multidimensi
Array multidimensi memperluas konsep array dua dimensi dengan memungkinkan untuk menyimpan data dalam tiga dimensi atau lebih. Ini berarti array multidimensi dapat memiliki lebih dari dua indeks untuk mengakses elemen-elemennya. Contoh multidimensi lainnya adalah array tiga dimensi, empat dimensi, dan seterusnya. Array multidimensi memungkinkan penyimpanan data yang lebih besar dan kompleks.

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
Kode diatas merupakan implementasi dari penggunaan array `multidimensi`, kode tersebut berfungsi untuk mengisi array tiga dimensi sesuai yang diinputkan oleh user serta menampilkan array tersebut.

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
Kode diatas merupakan implementasi dari penggunaan `array satu dimensi` dan algoritma `searching`, kode tersebut berfungsi untuk mengisi array sesuai dengan yang diinputkan oleh user lalu akan mengecek nilai maksimum dari array tersebut.

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
![Output 1](https://raw.githubusercontent.com/grazeza/Struktur-Data-Assignment/main/Modul%202%20-%20Array/gambar/Output1.png)
Kode diatas adalah contoh penggunaan `array satu dimensi` dan algoritma `searching`. Pertama program akan meminta user unutk menentukan indeks array yang nanti akan diinputkan user, lalu program akan mengecek nilai yang diinputkan tadi apakah bernilai ganjil atau genap yang kemudian akan dimasukkan ke array yang sudah diinisialisasi manual. Terakhir program akan mencetak array keseluruhan, array bilangan genap, dan array bilangan ganjil.

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
![Output 2](https://raw.githubusercontent.com/grazeza/Struktur-Data-Assignment/main/Modul%202%20-%20Array/gambar/Output2.png)
Kode diatas merupakan implementasi dari penggunaan array `multidimensi`, kode tersebut berfungsi untuk mengisi array tiga dimensi yang indeks dan isinya dinputkan secara manual oleh user.

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
![Output 3](https://raw.githubusercontent.com/grazeza/Struktur-Data-Assignment/main/Modul%202%20-%20Array/gambar/Output3.png)
Pertama program akan menampilkan sebuah menu, user diminta untuk memilih menu tersebut, jika user memilih “Input Array” maka user diminta untuk menginputkan 10 bilangan yang mana akan dimasukkan ke array yang sudah ditentukan indeksnya yaitu 10. Lalu jika user memilih “Tampil Array” program akan mencetak array yang tadi sudah user input. Jika user memilih “Cari Nilai Minimum” maka program akan mencari nilai mininum dari array tadi, begitu juga “Cari Nilai Maksimum” program akan mencari nilai maksimumnya. Terakhir jika user memilih “Hitung Rata-Rata” maka program akan mencari nilai rata rata dari array tadi lalu mencetaknya.

## Kesimpulan
Array adalah struktur data mendasar yang terdiri dari elemen-elemen yang memiliki indeks numerik, dimulai dari 0 dan terus bertambah sesuai panjang data. Meskipun penggunaan memori array relatif sedikit, fleksibilitasnya terbatas. Beberapa tipe array yang umum digunakan adalah array satu dimensi, array dua dimensi dan array multidimensi. Berikut beberapa kelebihan dan kekurangan array: 
- Kelebihan Array :
1. Array sangat  baik jika digunakan untuk mengakses secara acak. Karena secara acak index di array dapat secara langsung diakses tanpa melalui index lain
2. Jika berada di suatu lokasi index sangatlah mudah untuk mencari ke index tersebut
3. Jika index array adalah nilai - nilai tersendiri dan semuanya harus terjaga, maka penggunaan penyimpanannya sangatlah tepat
4. Tidak mudah crash
5. Cepatnya mengeksekusi data
6. Tidak banyak memekan memory

- Kekurangan Array :
1. Ukuran file yang sangatlah besar
2. Tidak efisien dalam penggunaan memory
3. jika array bertipe homogen , maka user tidak dapat mempunyai arry diman satu index adalah karakter utamanya [1]

## Referensi
[1] Taufiqqurahman, M.. Kelebihan dan Kekurangan Array. boltremjaya.wordpress.com; 2021. https://kelompok1ka2.blogspot.com/2015/10/kelebihan-dan-kekurangan-array.html

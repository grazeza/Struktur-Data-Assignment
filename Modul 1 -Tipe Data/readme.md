# Laporan Praktikum Modul Tipe Data
Fahreza Ilham Wicaksono

## Dasar Teori
Tipe data merpukan pengelompokan data berdasarkan ciri-cirinya. Jenis ini mempunya fungsi yang berbeda-beda yang digunakan oleh compiler untuk mengetahui bagaimana sebuah data digunakan. Ada 3 tipe data yaitu primitif, abstak, dan koleksi.
### - Tipe data Primitif
Tipe data primitif merupakan tipe data yang sudah ditentukan oleh program c++ itu sendiri. Contohnya yaitu int, float, string, boolean dan char.
### - Tipe data Abstrak
Tipe data abstark adalah tipe data yang dibuat atau diciptakan oleh programmer itu sendiri.
### - Tipe data Koleksi
Tipe data Koleksi merupakan tipe data yang digunakan untuk menyimpan data secara bersamaan di suatu variabel. Contohnya array, vector, dan map.

## Guided
### 1. Tipe data primitf
```c++
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

### 2. Tipe data abstark
```c++
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

### 3. Tipe data koleksi
```c++
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

## Unguided
### 1. Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi tipe data primitif! 
``` c++
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
```
### Output
![Output 1](https://raw.githubusercontent.com/grazeza/Struktur-Data-Assignment/main/Modul%201%20-Tipe%20Data/gambar/Output1.png)
Kode diatas adalah contoh penggunaan dari tipe data primitif. Fungsi pertama digunakan untuk mengecek angka apakah ganjil atau genap sedangkan fungsi kedua untuk membandingkan antara angka pertama atau kedua. 
Kesimpulanya adalah tipe data ini merupakan tipe data default, yang mana tidak ada fleksibilitas dalam penggunaanya namun tipe data ini yang menjadi pondasi dari seluruh program c++.
### Full code Screenshot
![Code 1](https://raw.githubusercontent.com/grazeza/Struktur-Data-Assignment/main/Modul%201%20-Tipe%20Data/gambar/Code1.png)

### 2. Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya
``` c++
#include <iostream>
#include <stdio.h>

using namespace std;

// inisialisasi class
class Game
{
public:
    string nama;
    string genre;
    int tahun;
    string size;

    // fungsi menampilkan info class
    void displayInfo()
    {
        cout << "Game " << nama << " dengan genre " << genre << " di publish tahun " << tahun << " dengan size " << size << endl;
    }
};

// inisialisasi struct
struct Hero
{
    const char *name;
    const char *role;
    string type;
};

int main()
{
    // deklarasi class
    Game game1;

    game1.nama = "Dark Souls";
    game1.genre = "RPG Linear";
    game1.tahun = 2018;
    game1.size = "9,2 GB";
    game1.displayInfo();

    // deklarasi struct
    Hero hero1;
    hero1.name = "John Dark Soul";
    hero1.role = "Sorcerer";
    hero1.type = "DPS";

    cout << endl;
    cout << "Karakter" << endl;
    cout << "Name: " << hero1.name << endl;
    cout << "Role: " << hero1.role << endl;
    cout << "Type: " << hero1.type << endl;

    return 0;
}
```
### Output
![Output 2](https://raw.githubusercontent.com/grazeza/Struktur-Data-Assignment/main/Modul%201%20-Tipe%20Data/gambar/Output2.png)
Class merupakan tipe data defaultnya adalah private, jadi jika objek anggota dari class itu sendiri ingin dipublikasikan, maka harus menyertakan public di potongan kode tersebut Sedangakan Struct atau structure merupakan tipe data yang menyimpan beberapa data dengan default public, Struktur bermanfaat untuk mengelompokan sejumlah data dengan tipe yang berlainan[1]. Kode diatas merupakan contoh penggunaan class dan struct, pada class menyertakan public agar kode bisa diakses di int main dan pada struct karena defaultnya public jadi langsung inisialisasi variabel.
### Full code Screenshot
![Code 2](https://raw.githubusercontent.com/grazeza/Struktur-Data-Assignment/main/Modul%201%20-Tipe%20Data/gambar/Code2.png)

### 3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map
```c++
#include <iostream>
#include <map>

using namespace std;

int main()
{
    // insialisasi dan deklarasi map
    map<string, int> dataDamage;

    // isi value map
    dataDamage["Strength"] = 650;
    dataDamage["Dexterity"] = 500;
    dataDamage["Intellegence"] = 800;
    dataDamage["Faith"] = 700;

    cout << "Informasi Damage Build" << endl;
    
    // perulangan range based loop untuk menampilkan map
    for (auto& entry : dataDamage) {
        cout << "Build " << entry.first << " Damage: " << entry.second << endl;
    }

    return 0;
}
```
### Output
![Output 3](https://raw.githubusercontent.com/grazeza/Struktur-Data-Assignment/main/Modul%201%20-Tipe%20Data/gambar/Output3.png)
Kode diatas merupakan penggunaan map dalam c++, dimulai dari insialisasi map beserta tipe datanya kemudian pengisian map pada int main lalu terakhir dengan perulangan for range based loop dengan menggunakan `auto` mencetak map tersebut. Perbedaan antara array dan map terletak pada tipe data indeks pada map yang memungkinkan untuk berupa tipe data selain integer[2].
### Full code Screenshot
![Code 3](https://raw.githubusercontent.com/grazeza/Struktur-Data-Assignment/main/Modul%201%20-Tipe%20Data/gambar/Code3.png)

## Kesimpulan
Tipe data adalah klasifikasi atau pengelompokan data berdasarkan sifat atau ciri-ciri tertentu. Setiap jenis tipe data memiliki fungsi yang berbeda-beda yang memungkinkan programmer untuk lebih leluasa membuat atau menciptakan suatu logika program yang lebih kompleks dan efisien juga digunakan oleh compiler untuk memahami cara data tersebut digunakan dalam program. Ada tiga tipe data utama, yaitu primitif, abstak, dan koleksi. 
- Tipe data primitif merupakan tipe data default yang menjadi pondasi
- Tipe data abstrak merupakan tipe data yang dibuat oleh programmer yang biasa digunakan di pemograman OOP.
- Tipe data kolektif merupakan tipe data yang digunakan untuk menyimpan data secara bersamaan.

## Referensi
[1] Akbar, Ramadhani. Struct dan Class. boltremjaya.wordpress.com; 2013. https://boltremjaya.wordpress.com/2013/09/16/struct-dan-class/

[2] Adam, Rian. TUTORIAL STRUKTUR DATA MAP PADA C++. structilmy.com; 2020. https://structilmy.com/blog/2020/08/08/tutorial-struktur-data-map-pada-c/

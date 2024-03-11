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
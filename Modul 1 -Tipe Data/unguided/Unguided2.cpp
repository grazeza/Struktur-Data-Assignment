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
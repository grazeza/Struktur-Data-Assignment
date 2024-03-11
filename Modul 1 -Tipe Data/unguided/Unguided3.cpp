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
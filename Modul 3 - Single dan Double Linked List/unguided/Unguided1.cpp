#include <iostream>

using namespace std;

// Fahreza Ilham Wicaksono 🗿
// 2311102191

struct Node
{
    string name;
    int age;
    Node *next;
};

Node *head;
Node *tail;

// inialisasi Node
void init()
{
    head = NULL;
    tail = NULL;
}

// pengecekan
bool isEmpty()
{
    if (head == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// tambah depan
void insertDepan(string name, int age)
{
    // buat node baru
    Node *baru = new Node;
    baru->name = name;
    baru->age = age;
    baru->next = NULL;

    if (isEmpty())
    {
        head = tail = baru;
        tail->next = NULL;
    }
    else
    {
        baru->next = head;
        head = baru;
    }
}

// tambah belakang
void insertBelakang(string name, int age)
{
    // buat node baru
    Node *baru = new Node;
    baru->name = name;
    baru->age = age;
    baru->next = NULL;

    if (isEmpty())
    {
        head = tail = baru;
        tail->next = NULL;
    }
    else
    {
        tail->next = baru;
        tail = baru;
    }
}

// hitung jumlah list
int countList()
{
    Node *hitung;
    hitung = head;
    int jumlah = 0;

    while (hitung != NULL)
    {
        jumlah++;
        hitung = hitung->next;
    }

    return jumlah;
}

// tambah tengah
void insertTengah(string name, int age, int posisi)
{
    if (posisi < 1 || posisi > countList())
    {
        cout << "Posisi diluar jangkauan" << endl;
    }
    else if (posisi == 1)
    {
        cout << "Posisi bukan di tengah" << endl;
    }
    else
    {
        Node *baru, *bantu;
        baru = new Node();
        baru->name = name;
        baru->age = age;

        // tranversing
        bantu = head;
        int nomor = 1;

        while (nomor < posisi - 1)
        {
            bantu = bantu->next;
            nomor++;
        }

        baru->next = bantu->next;
        bantu->next = baru;
    }
}

// hapus depan
void deleteDepan()
{
    Node *hapus;

    if (!isEmpty())
    {
        if (head->next != NULL)
        {
            hapus = head;
            head = head->next;
            delete hapus;
        }
        else
        {
            head = tail = NULL;
        }
    }
    else
    {
        cout << "List Kosong!" << endl;
    }
}

// hapus belakang
void deleteBelakang()
{
    Node *hapus;
    Node *bantu;

    if (!isEmpty())
    {
        if (head != tail)
        {
            hapus = tail;
            bantu = head;

            while (bantu->next != tail)
            {
                bantu = bantu->next;
            }

            tail = bantu;
            tail->next = NULL;
            delete hapus;
        }
        else
        {
            head = tail = NULL;
        }
    }
    else
    {
        cout << "List Kosong!" << endl;
    }
}

// hapsu tengah
void deleteTengah(int posisi)
{
    Node *hapus, *bantu, *bantu2;

    if (posisi < 1 || posisi > countList())
    {
        cout << "Posisi di luar jangkauan" << endl;
    }
    else if (posisi == 1)
    {
        cout << "Posisi bukan di tengah" << endl;
    }
    else
    {
        int nomor = 1;
        bantu = head;

        while (nomor <= posisi)
        {
            if (nomor == posisi - 1)
            {
                bantu2 = bantu;
            }

            if (nomor == posisi)
            {
                hapus = bantu;
            }

            bantu = bantu->next;
            nomor++;
        }
        bantu2->next = bantu;
        delete hapus;
    }
}

// ubah depan
void updateDepan(string name, int age)
{
    if (!isEmpty())
    {
        head->name = name;
        head->age = age;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// ubah tengah
void updateTengah(string name, int age, int posisi)
{
    Node *bantu;

    if (!isEmpty())
    {
        if (posisi < 1 || posisi > countList())
        {
            cout << "Posisi di luar jangkauan" << endl;
        }
        else if (posisi == 1)
        {
            cout << "Posisi bukan di tengah" << endl;
        }
        else
        {
            bantu = head;
            int nomor = 1;

            while (nomor < posisi)
            {
                bantu = bantu->next;
                nomor++;
            }

            bantu->name = name;
            bantu->age = age;
        }
    }
    else
    {
        cout << "List masih kosong" << endl;
    }
}

// ubah belakang
void updateBelakang(string name, int age)
{
    if (!isEmpty())
    {
        tail->name = name;
        tail->age = age;
    }
    else
    {
        cout << "List masih kosong" << endl;
    }
}

// hapus list
void clearList()
{
    Node *bantu, *hapus;
    bantu = head;

    while (bantu != NULL)
    {
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }

    head = tail = NULL;
    cout << "List berhasil terhapus!" << endl;
}

// tampilkan list
void displayData()
{
    Node *bantu;
    bantu = head;

    if (!isEmpty())
    {
        while (bantu != NULL)
        {
            cout << bantu->name << " " << bantu->age << endl;
            bantu = bantu->next;
        }

        cout << endl;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

int main()
{
    init();

    while (true)
    {
        int choice;
        string name;
        int age;
        int position;

        cout << "1. Tambah data posisi depan" << endl;
        cout << "2. Tambah data posisi belakang" << endl;
        cout << "3. Tambah data posisi tertentu" << endl;
        cout << "4. Hapus data posisi depan" << endl;
        cout << "5. Hapus data posisi belakang" << endl;
        cout << "6. Hapus data posisi tertentu" << endl;
        cout << "7. Ubah data posisi depan" << endl;
        cout << "8. Ubah data posisi belakang" << endl;
        cout << "9. Ubah data posisi tertentu" << endl;
        cout << "10. Tampilkan data" << endl;
        cout << "11. Exit" << endl;
        cout << "Masukkan pilihan? ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Masukkan nama: ";
            cin >> name;
            cout << "Masukkan umur: ";
            cin >> age;
            cout << endl;

            insertDepan(name, age);
            break;

        case 2:
            cout << "Masukkan nama: ";
            cin >> name;
            cout << "Masukkan umur: ";
            cin >> age;
            cout << endl;

            insertBelakang(name, age);
            break;

        case 3:
            cout << "Masukkan nama: ";
            cin >> name;
            cout << "Masukkan umur: ";
            cin >> age;
            cout << "Masukkan posisi data: ";
            cin >> position;
            cout << endl;

            insertTengah(name, age, position);
            break;

        case 4:
            deleteDepan();
            break;

        case 5:
            deleteBelakang();
            break;

        case 6:
            cout << "Masukkan poisis data yang ingin dihapus: ";
            cin >> position;
            deleteTengah(position);
            break;

        case 7:
            cout << "Masukkan nama: ";
            cin >> name;
            cout << "Masukkan umur: ";
            cin >> age;
            cout << endl;

            updateDepan(name, age);
            break;

        case 8:
            cout << "Masukkan nama: ";
            cin >> name;
            cout << "Masukkan umur: ";
            cin >> age;
            cout << endl;

            updateBelakang(name, age);
            break;

        case 9:
            cout << "Masukkan nama: ";
            cin >> name;
            cout << "Masukkan umur: ";
            cin >> age;
            cout << "Masukkan posisi data: ";
            cin >> position;
            cout << endl;

            updateTengah(name, age, position);
            break;
        case 10:
            displayData();
            break;
        case 11:
            return 0;
            break;

        default:
            cout << "Pilihan yang anda masukkan tidak valid" << endl;
            break;
        }
    }
}
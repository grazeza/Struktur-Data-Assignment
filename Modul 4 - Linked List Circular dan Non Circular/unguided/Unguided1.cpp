#include <iostream>
#include <iomanip>

using namespace std;

// Fahreza Ilham Wicaksono🗿
// 2311102191

// program single linked list circular

// deklarasi struct node
struct Mahasiswa
{
    string name;
    string nim;
    Mahasiswa *next;
};

Mahasiswa *head, *tail, *baru, *bantu, *hapus;
string temp;

void init()
{
    head = NULL;
    tail = head;
}

// pengecekan
bool isEmpty()
{
    if (head == NULL)
    {
        return 1; // true
    }
    else
    {
        return 0; // false
    }
}

// buat node baru
void buatNode(string name, string nim)
{
    baru = new Mahasiswa;
    baru->name = name;
    baru->nim = nim;
    baru->next = NULL;
}

// hitung list
int hitungList()
{
    bantu = head;
    int jumlah = 0;

    while (bantu != tail)
    {
        jumlah++;
        bantu = bantu->next;
    }

    return jumlah;
}

// tambah depan
void insertDepan(string name, string nim)
{
    // buat node baru
    buatNode(name, nim);

    if (isEmpty())
    {
        head = baru;
        tail = head;
        baru->next = head;
    }
    else
    {
        while (tail->next != head)
        {
            tail = tail->next;
        }

        baru->next = head;
        head = baru;
        tail->next = head;
    }

    cout << "Data telah ditambahkan" << endl;
    cout << endl;
}

// tambah belakan
void insertBelakang(string name, string nim)
{
    // buat node baru
    buatNode(name, nim);

    if (isEmpty())
    {
        head = baru;
        tail = head;
        tail->next = head;
    }
    else
    {
        while (tail->next != head)
        {
            tail = tail->next;
        }

        tail->next = baru;
        baru->next = head;
        tail = baru;
    }

    cout << "Data telah ditambahkan" << endl;
    cout << endl;
}

// tambah tengah
void insertTengah(string name, string nim, int posisi)
{
    buatNode(name, nim);

    if (isEmpty())
    {
        head = baru;
        tail = head;
        baru->next = head;
    }
    else
    {
        // transversing
        int nomor = 1;
        bantu = head;

        while (nomor < posisi - 1)
        {
            bantu = bantu->next;
            nomor++;
        }

        baru->next = bantu->next;
        bantu->next = baru;
    }

    cout << "Data telah ditambahkan" << endl;
    cout << endl;
}

// ubah depan
void ubahDepan(string name, string nim)
{
    if (!isEmpty())
    {
        temp = head->name;
        head->name = name;
        head->nim = nim;

        cout << "Data " << temp << " telah diganti dengan data " << name << endl;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// ubah belakang
void ubahBelakang(string name, string nim)
{
    if (!isEmpty())
    {
        while (tail->next != head)
        {
            tail = tail->next;
        }

        temp = tail->name;
        tail->name = name;
        tail->nim = nim;

        cout << "Data " << temp << " telah diganti dengan data " << name << endl;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// ubah tengah
void ubahTengah(string name, string nim, int posisi)
{
    if (!isEmpty())
    {
        bantu = head;
        int nomor = 1;

        while (nomor < posisi)
        {
            bantu = bantu->next;
            nomor++;
        }

        temp = bantu->name;
        bantu->name = name;
        bantu->nim = nim;

        cout << "Data " << temp << " telah diganti dengan data " << name << endl;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// hapus depan
void hapusDepan()
{
    if (!isEmpty())
    {
        hapus = head;
        tail = head;

        if (hapus->next == head)
        {
            temp = hapus->name;
            head = NULL;
            tail = NULL;

            delete hapus;
            cout << "Data " << temp << " berhasil dihapus" << endl;
        }
        else
        {
            while (tail->next != hapus)
            {
                tail = tail->next;
            }

            temp = hapus->name;
            head = head->next;
            tail->next = head;
            hapus->next = NULL;

            delete hapus;
            cout << "Data " << temp << " berhasil dihapus" << endl;
        }
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// hapus belakang
void hapusBelakang()
{
    if (!isEmpty())
    {
        hapus = head;
        tail = head;

        if (hapus->next == head)
        {
            temp = head->name;
            head = NULL;
            tail = NULL;

            delete hapus;
            cout << "Data " << temp << " berhasil dihapus" << endl;
        }
        else
        {
            while (hapus->next != head)
            {
                hapus = hapus->next;
            }

            while (tail->next != hapus)
            {
                tail = tail->next;
            }

            temp = hapus->name;
            tail->next = head;
            hapus->next = NULL;

            delete hapus;
            cout << "Data " << temp << " berhasil dihapus" << endl;
        }
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// hapus tengah
void hapusTengah(int posisi)
{
    if (!isEmpty())
    {
        // transversing
        int nomor = 1;
        bantu = head;

        while (nomor < posisi - 1)
        {
            bantu = bantu->next;
            nomor++;
        }

        hapus = bantu->next;
        temp = hapus->name;
        bantu->next = hapus->next;

        delete hapus;
        cout << "Data " << temp << " berhasil dihapus" << endl;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// hapus list
void clearList()
{
    if (head != NULL)
    {
        hapus = head->next;

        while (hapus != head)
        {
            bantu = hapus->next;
            delete hapus;
            hapus = bantu;
        }

        delete head;
        head = NULL;
    }

    cout << "List berhasil terhapus!" << endl;
}

// tampilkan list
void tampil()
{
    if (!isEmpty())
    {
        tail = head;

        cout << "---------------------------------------------------------------" << endl;
        cout << "|                Nama              |            NIM           |" << endl;
        cout << "---------------------------------------------------------------" << endl;

        do
        {
            cout << "---------------------------------------------------------------" << endl;
            cout << "|    " << setw(27) << left << tail->name << " | " << setw(26) << left << tail->nim << "|" << endl;
            cout << "---------------------------------------------------------------" << endl;
            tail = tail->next;
        } while (tail != head);

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
        int choice, repeat;
        string name, nim;
        int position;

        cout << "PROGRAM SINGLE LINKED LIST CIRCULAR" << endl;
        cout << endl;
        cout << "1. Tambah Depan" << endl;
        cout << "2. Tambah Belakang" << endl;
        cout << "3. Tambah Tengah" << endl;
        cout << "4. Ubah Depan" << endl;
        cout << "5. Ubah Belakang" << endl;
        cout << "6. Ubah Tengah" << endl;
        cout << "7. Hapus Depan" << endl;
        cout << "8. Hapus Belakang" << endl;
        cout << "9. Hapus Tengah" << endl;
        cout << "10. Hapus List" << endl;
        cout << "11. Tampilkan" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih Operasi: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Total data yang akan ditambah? ";
            cin >> repeat;

            for (int i = 0; i < repeat; i++)
            {
                cout << "Masukkan Nama: ";
                cin >> name;
                cout << "Masukkan NIM: ";
                cin >> nim;
                cout << endl;

                insertDepan(name, nim);
            }

            break;

        case 2:
            cout << "Total data yang akan ditambah? ";
            cin >> repeat;

            for (int i = 0; i < repeat; i++)
            {
                cout << "Masukkan Nama: ";
                cin >> name;
                cout << "Masukkan NIM: ";
                cin >> nim;
                cout << endl;

                insertBelakang(name, nim);
            }
            break;

        case 3:
            cout << "Masukkan Nama: ";
            cin >> name;
            cout << "Masukkan NIM: ";
            cin >> nim;
            cout << "Masukkan Posisi : ";
            cin >> position;
            cout << endl;

            insertTengah(name, nim, position);
            break;

        case 4:
            cout << "Masukkan Nama: ";
            cin >> name;
            cout << "Masukkan NIM: ";
            cin >> nim;
            cout << endl;

            ubahDepan(name, nim);
            break;

        case 5:
            cout << "Masukkan Nama: ";
            cin >> name;
            cout << "Masukkan NIM: ";
            cin >> nim;
            cout << endl;

            ubahBelakang(name, nim);
            break;

        case 6:
            cout << "Masukkan Nama: ";
            cin >> name;
            cout << "Masukkan NIM: ";
            cin >> nim;
            cout << "Masukkan Posisi data: ";
            cin >> position;
            cout << endl;

            ubahTengah(name, nim, position);
            break;

        case 7:
            hapusDepan();
            break;

        case 8:
            hapusBelakang();
            break;

        case 9:
            cout << "Masukkan Posisi : ";
            cin >> position;
            hapusTengah(position);
            break;

        case 10:
            clearList();
            break;

        case 11:
            tampil();
            break;

        case 0:
            return 0;
            break;

        default:
            cout << "Pilihan yang anda masukkan tidak valid" << endl;
            break;
        }
    }

    return 0;
}
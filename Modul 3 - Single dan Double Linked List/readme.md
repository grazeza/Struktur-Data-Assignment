# <h1 align="center"> Laporan Praktikum Modul Single dan Double Linked List </h1>
<p align="center"> Fahreza Ilham Wicaksono </p>


## Dasar Teori
### Linked List
Linked list adalah strukur data linier berbentuk rantai simpul di mana setiap simpul menyimpan 2 item, yaitu nilai data dan pointer ke simpul elemen berikutnya. Berbeda dengan array, elemen linked list tidak ditempatkan dalam alamat memori yang berdekatan melainkan elemen ditautkan menggunakan pointer. Ukuran elemen dari linked list dapat bertambah secara dinamis dan mudah untuk menyisipkan dan menghapus elemen karena tidak seperti array, kita hanya perlu mengubah pointer elemen sebelumnya dan elemen berikutnya untuk menyisipkan atau menghapus elemen.[1] Terdapat 2 tipe linked list yaitu Non-Circular dan Circular, Non-circular berarti pointer penunjuk dari tail akan merujuk ke NULL sedangkan Circular pointernya akan mengarah ke node dari head.
### Single Linked List
Konsep single linked list bagaikan sungai yang memiliki awal dan akhir, yang mana juga hanya bergerak ke satu arah artinya pointer-pointer yang menghubungkan antara node hanya merujuk ke node selanjutnya. Pada single linked list pointer penunjuk dari tail merujuk ke NULL.
### Double Linked List
Berbeda dengan single linked list, double linked list merupakan kebalikanya artinya pointer-pointer penunjuknya ada yang mengrah ke node selanjutnya ataupun node sebelumnya. Sehingga memberikan fleksibilitas tambahan untuk mengolah linked list tersebut.

## Guided
### 1. Latihan Single Linked List
```c++
#include <iostream>

using namespace std;

struct Node
{
    int data;
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
void insertDepan(int nilai)
{
    // buat node baru
    Node *baru = new Node;
    baru->data = nilai;
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
void insertBelakang(int nilai)
{
    // buat node baru
    Node *baru = new Node;
    baru->data = nilai;
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
int hitungList()
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
void insertTengah(int data, int posisi)
{
    if (posisi < 1 || posisi > hitungList())
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
        baru->data = data;

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
void hapusDepan()
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
void hapusBelakang()
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
void hapusTengah(int posisi)
{
    Node *hapus, *bantu, *bantu2;

    if (posisi < 1 || posisi > hitungList())
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
void ubahDepan(int data)
{
    if (!isEmpty())
    {
        head->data = data;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// ubah tengah
void ubahTengah(int data, int posisi)
{
    Node *bantu;

    if (!isEmpty())
    {
        if (posisi < 1 || posisi > hitungList())
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

            bantu->data = data;
        }
    }
    else
    {
        cout << "List masih kosong" << endl;
    }
}

// ubah belakang
void ubahBelakang(int data)
{
    if (!isEmpty())
    {
        tail->data = data;
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
void tampil()
{
    Node *bantu;
    bantu = head;

    if (!isEmpty())
    {
        while (bantu != NULL)
        {
            cout << bantu->data << ends;
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

    insertDepan(3);
    tampil();
    insertBelakang(5);
    tampil();
    insertDepan(2);
    tampil();
    insertDepan(1);
    tampil();
    hapusDepan();
    tampil();
    hapusBelakang();
    tampil();
    insertTengah(7, 2);
    tampil();
    hapusTengah(2);
    tampil();
    ubahDepan(1);
    tampil();
    ubahBelakang(8);
    tampil();
    ubahTengah(11, 2);
    tampil();
    
    return 0;
}
```
![Output 0.1](https://raw.githubusercontent.com/grazeza/Struktur-Data-Assignment/main/Modul%203%20-%20Single%20dan%20Double%20Linked%20List/gambar/Output0.1.png)

Kode diatas merupakan implementasi dari penggunaan `single linked list`. Di dalam kode tersebut terdapat banyak prosedur dan fungsi untuk mengolah single linked list seperti Insert, Delete, Update, countList. Masing-masing memiliki kegunaanya sendiri, seperti namanya Menambahkan data, Menghapus data, Mengupdate data, baik di depan atau belakang atau tengah serta lainya.

### 2. Latihan Double Linked List
```c++
#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
};

class DoubleLinkedList
{
public:
    Node *head;
    Node *tail;

    DoubleLinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }

    void push(int data)
    {
        Node *newNode = new Node;
        newNode->data = data;
        newNode->prev = nullptr;
        newNode->next = head;

        if (head != nullptr)
        {
            head->prev = newNode;
        }
        else
        {
            tail = newNode;
        }

        head = newNode;
    }

    void pop()
    {
        if (head == nullptr)
        {
            return;
        }

        Node *temp = head;
        ;
        head = head->next;

        if (head != nullptr)
        {
            head->prev = nullptr;
        }
        else
        {
            tail = nullptr;
        }

        delete temp;
    }

    bool update(int oldData, int newData)
    {
        Node *current = head;

        while (current != nullptr)
        {
            if (current->data == oldData)
            {
                current->data = newData;
                return true;
            }

            current = current->next;
        }

        return false;
    }

    void deleteAll()
    {
        Node *current = head;

        while (current != nullptr)
        {
            Node *temp = current;
            current = current->next;
            delete temp;
        }

        head = nullptr;
        tail = nullptr;
    }

    void display()
    {
        Node *current = head;

        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }

        cout << endl;
    }
};

int main() {
    DoubleLinkedList list;
    
    while (true) {
        int choice;

        cout << "1. Add data" << endl;
        cout << "2. Delete data" << endl;
        cout << "3. Update data" << endl;
        cout << "4. Clear data" << endl;
        cout << "5. Display data" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int data;
                cout << "Enter data to add: ";
                cin >> data;
                list.push(data);
                break;
            }
            case 2: {
                list.pop();
                break;
            }
            case 3: {
                int oldData, newData;
                cout << "Enter old data: ";
                cin >> oldData;
                cout << "Enter new data: ";
                cin >> newData;
                bool updated = list.update(oldData, newData);
                if (!updated) {
                    cout << "Data not found" << endl;
                }
                break;
            }
            case 4: {
                list.deleteAll();
                break;
            }
            case 5: {
                list.display();
                break;
            }
            case 6: {
                return 0;
            }
            default: {
                cout << "Invalid choice" << endl;
                break;
            }
        }
    }
    return 0;
}
```
![Output 0.2](https://raw.githubusercontent.com/grazeza/Struktur-Data-Assignment/main/Modul%203%20-%20Single%20dan%20Double%20Linked%20List/gambar/Output0.2.png)

Kode diatas merupakan implementasi dari penggunaan `Double linked list`, Fungsi dan posedur di kode tersebut kurang lebih sama namun yang membedakan disini Linked list dibungkus di struktur Class yang membuat kode lebih efisien dan mudah digunakan.

## Unguided
### 1. Buatlah program menu Single Linked List Non-Circular untuk menyimpan Nama dan usia mahasiswa, dengan menggunakan inputan dari user.
``` c++
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
```
### Output
#### Pengisian data awal
![Output 1.1](https://raw.githubusercontent.com/grazeza/Struktur-Data-Assignment/main/Modul%203%20-%20Single%20dan%20Double%20Linked%20List/gambar/Output1.1.png)
#### Penghapusan data
![Output 1.2](https://raw.githubusercontent.com/grazeza/Struktur-Data-Assignment/main/Modul%203%20-%20Single%20dan%20Double%20Linked%20List/gambar/Output1.2.png)
#### Penambahan data 
![Output 1.3](https://raw.githubusercontent.com/grazeza/Struktur-Data-Assignment/main/Modul%203%20-%20Single%20dan%20Double%20Linked%20List/gambar/Output1.3.png)
![Output 1.4](https://raw.githubusercontent.com/grazeza/Struktur-Data-Assignment/main/Modul%203%20-%20Single%20dan%20Double%20Linked%20List/gambar/Output1.4.png)
#### Update data 
![Output 1.5](https://raw.githubusercontent.com/grazeza/Struktur-Data-Assignment/main/Modul%203%20-%20Single%20dan%20Double%20Linked%20List/gambar/Output1.5.png)
#### Tampilan seluruh data 
![Output 1.6](https://raw.githubusercontent.com/grazeza/Struktur-Data-Assignment/main/Modul%203%20-%20Single%20dan%20Double%20Linked%20List/gambar/Output1.6.png)

Kode diatas adalah contoh penggunaan `Single Linked List` yang meliputi beberapa fungsi dan prosedur yang normal seperti Insert, Delete, dan Update. Pada kode tersebut user diberikan sebuah menu yang dimana user bisa memilih diantara menu tersebut, menu-menu tadi mengarahkan ke salah satu prosedur atau fungsi. Setelah melakukan beberapa pengolahan pada Linked List user bisa mencetak datanya.

### 2. Modifikasi Guided Double Linked List dilakukan dengan penambahan operasi untuk menambah data, menghapus, dan update di tengah / di urutan tertentu yang diminta. Selain itu, buatlah agar tampilannya menampilkan Nama produk dan harga.
``` c++
#include <iostream>
#include <iomanip>

using namespace std;

// Fahreza Ilham Wicaksono 🗿
// 2311102191

class Node
{
public:
    string name;
    string price;
    Node *prev;
    Node *next;
};

class DoubleLinkedList
{
public:
    Node *head;
    Node *tail;

    DoubleLinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }

    bool isEmpty()
    {
        if (head == nullptr)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int countList()
    {
        Node *count;
        count = head;
        int amount = 0;

        while (count != nullptr)
        {
            count = count->next;
            amount++;
        }

        return amount;
    }

    void push(string name, string price)
    {
        Node *newNode = new Node;
        newNode->name = name;
        newNode->price = price;
        newNode->prev = nullptr;
        newNode->next = head;

        if (head != nullptr)
        {
            head->prev = newNode;
        }
        else
        {
            tail = newNode;
        }

        head = newNode;
    }

    void pushCertain(string name, string price, int position)
    {
        if (position < 1 || position > countList())
        {
            cout << "Posisi diluar jangkauan" << endl;
        }
        else if (position == 1)
        {
            cout << "Posisi bukan di tengah" << endl;
        }
        else
        {
            Node *newNode, *current, *prevCurrent;
            newNode = new Node();
            newNode->name = name;
            newNode->price = price;

            // tranversing
            current = head;
            int number = 1;

            while (number < position - 1)
            {
                current = current->next;
                number++;
            }

            newNode->next = current->next;
            newNode->prev = current;
            current->next = newNode;
            current->next->prev = newNode;
        }
    }

    void pop()
    {
        if (head == nullptr)
        {
            return;
        }

        Node *temp = head;
        ;
        head = head->next;

        if (head != nullptr)
        {
            head->prev = nullptr;
        }
        else
        {
            tail = nullptr;
        }

        delete temp;
    }

    void popCertain(int position)
    {
        Node *temp, *current, *prevCurrent;

        if (position < 1 || position > countList())
        {
            cout << "Posisi di luar jangkauan" << endl;
        }
        else if (position == 1)
        {
            cout << "Posisi bukan di tengah" << endl;
        }
        else
        {
            int number = 1;
            current = head;

            while (number <= position)
            {
                if (number == position - 1)
                {
                    prevCurrent = current;
                }

                if (number == position)
                {
                    temp = current;
                }

                current = current->next;
                number++;
            }
            prevCurrent->next = current;
            current->prev = prevCurrent;
            delete temp;
        }
    }

    bool update(string oldData, string newData, string price)
    {
        Node *current = head;

        while (current != nullptr)
        {
            if (current->name == oldData)
            {
                current->name = newData;
                current->price = price;
                return true;
            }

            current = current->next;
        }

        return false;
    }

    void deleteAll()
    {
        Node *current = head;

        while (current != nullptr)
        {
            Node *temp = current;
            current = current->next;
            delete temp;
        }

        head = nullptr;
        tail = nullptr;
    }

    void display()
    {
        Node *current = head;

        cout << "---------------------------------------------------------------" << endl;
        cout << "|        Nama Produk            |            Harga           |" << endl;
        cout << "---------------------------------------------------------------" << endl;

        while (current != nullptr)
        {
            cout << "---------------------------------------------------------------" << endl;
            cout << "|    " << setw(27) << left << current->name << " | " << setw(26) << left << current->price << "|" << endl;
            cout << "---------------------------------------------------------------" << endl;

            current = current->next;
        }

        cout << endl;
    }
};

int main()
{
    DoubleLinkedList list;

    while (true)
    {
        int choice, position;
        string name, price;

        cout << "Toko Skincare Purwokerto" << endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Hapus Data" << endl;
        cout << "3. Update Data" << endl;
        cout << "4. Tambah Data Urutan Tertentu" << endl;
        cout << "5. Hapus Data Urutan Tertentu" << endl;
        cout << "6. Hapus Seluruh Data" << endl;
        cout << "7. Tampilkan Data" << endl;
        cout << "8. Exit" << endl;
        cout << "Masukkan pilihan anda: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "Masukkan nama Produk: ";
            cin >> name;
            cout << "Masukkan harga Produk: ";
            cin >> price;
            cout << endl;

            list.push(name, price);
            break;
        }
        case 2:
        {
            list.pop();
            break;
        }
        case 3:
        {
            string oldData, newData, price;
            cout << "Masukkan nama produk lama: ";
            cin >> oldData;
            cout << "Masukkan nama produk baru: ";
            cin >> newData;
            cout << "Masukkan harga produk baru: ";
            cin >> price;

            bool updated = list.update(oldData, newData, price);
            if (!updated)
            {
                cout << "Data tidak ditemukan" << endl;
            }
            break;
        }
        case 4:
        {
            cout << "Masukkan nama Produk: ";
            cin >> name;
            cout << "Masukkan harga Produk: ";
            cin >> price;
            cout << "Masukkan urutan produk: ";
            cin >> position;
            cout << endl;

            list.pushCertain(name, price, position);
            break;
        }
        case 5:
        {
            cout << "Masukkan urutan produk yang ingin dihapus: ";
            cin >> position;
            cout << endl;

            list.popCertain(position);
            break;
        }
        case 6:
        {
            list.deleteAll();
            break;
        }
        case 7:
        {
            list.display();
            break;
        }
        case 8:
        {
            return 0;
        }
        default:
        {
            cout << "Pilihan tidak valid" << endl;
            break;
        }
        }
    }
    return 0;
}
```
### Output
#### Penginputan data awal
![Output 2.1](https://raw.githubusercontent.com/grazeza/Struktur-Data-Assignment/main/Modul%203%20-%20Single%20dan%20Double%20Linked%20List/gambar/Output2.1.png)
#### Penambahan data 
![Output 2.2](https://raw.githubusercontent.com/grazeza/Struktur-Data-Assignment/main/Modul%203%20-%20Single%20dan%20Double%20Linked%20List/gambar/Output2.2.png)
#### Penghapusan data 
![Output 2.3](https://raw.githubusercontent.com/grazeza/Struktur-Data-Assignment/main/Modul%203%20-%20Single%20dan%20Double%20Linked%20List/gambar/Output2.3.png)
#### Update data 
![Output 2.4](https://raw.githubusercontent.com/grazeza/Struktur-Data-Assignment/main/Modul%203%20-%20Single%20dan%20Double%20Linked%20List/gambar/Output2.4.png)
#### Tampilan seluruh data
![Output 2.5](https://raw.githubusercontent.com/grazeza/Struktur-Data-Assignment/main/Modul%203%20-%20Single%20dan%20Double%20Linked%20List/gambar/Output2.5.png)

Kode diatas merupakan implementasi dari penggunaan array `Double Linked List`. Di sini Linked List di bungkus dengan Class, hal ini memudahkan untuk pemanggilan Linked List. Fungsi dan prosdeur juga masih sama seperti pada `Unguided 1` . Pada kode tersebut user diberikan menu yang kurang lebih fungsinya sama yaitu mengarahkan ke salah satu fungsi atau prosedur yang sudah dibuat.

## Kesimpulan
Link adalah tempat penyimpanan alamat simpulnya (pointer). Linked list adalah sebuah struktur untuk menyimpan data yang bersifat dinamik. Beberapa operasi dapat diterapkan pada linked list seperti sisip(insert), hapus(delete), dan update. Operasi-operasi yang ada pada linked list relatif lebih sulit jika dibandingkan dengan operasi-operasi pada struktur yang statis.[2] 
Adapun perbedaan dari struktur data lainya seperti array yaitu linked list memungkinkan penyimpanan memori yang acak dan fleksibilitas yang lebih tinggi dibandingkan array walaupun mengorbankan dari penyimpanan dalam memori namun linked list bisa menjadi solusi untuk data yang memang perlu fleksibitas dalam mengolahnya.

## Referensi
[1] Trivusi. Struktur Data Linked List: Pengertian, Karakteristik, dan Jenis-jenisnya. www.trivusi.web.id; 2022. https://www.trivusi.web.id/2022/07/struktur-data-linked-list.html

[2] Kurniman Putra, Agung. Single Linked List. Single Linked List: Fakultas Komputer. (2019)

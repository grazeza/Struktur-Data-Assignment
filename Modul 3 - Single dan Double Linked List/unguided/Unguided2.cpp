#include <iostream>
#include <iomanip>

using namespace std;

// Fahreza Ilham Wicaksono 🗿
// 2311102191

// inisialisasi class Node
class Node
{
public:
    string name;
    string price;
    Node *prev;
    Node *next;
};

// inisialisasi class Node
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

    // mencetak data linked list dalam bentuk tabel
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
    // deklarasi linked list
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

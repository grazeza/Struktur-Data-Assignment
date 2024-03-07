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
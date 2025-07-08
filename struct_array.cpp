#include <iostream>
using namespace std;

struct Hero
{
    string nama;
    string role;
    string tipe;
};

int main()
{
    Hero arhero[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "hero ke- " << i + 1 << endl;
        cout << "masukkan nama hero = ";
        cin >> arhero[i].nama;
        cout << "masukkan jenis role = ";
        cin >> arhero[i].role;
        cout << "masukkan tipe hero = ";
        cin >> arhero[i].tipe;
        cout << endl;
     
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "hero ke- " << i + 1 << endl;
        cout << "nama hero = " << arhero[i].nama << endl;
        cout << "jenis role hero = " << arhero[i].role << endl;
        cout << "tipe hero = " << arhero[i].tipe << endl;
    }
    cout << endl;
    cout << "tampilkan hero" << endl;
    cout << endl;
}

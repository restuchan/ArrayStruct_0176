#include <iostream>
using namespace std;

struct Hero{
    string nama;
    string role;
    string tipe;
};

int main()
{
    Hero arhero;

    cout << "masukkan nama hero = ";
    cin >> arhero.nama;
    cout << "masukkan jenis role = ";
    cin >> arhero.role;
    cout << "masukkan tipe hero = ";
    cin >> arhero.tipe;
    cout << endl;
    cout << "tampilkan hero" << endl;
    cout << endl;
    cout << "nama hero = " << arhero.nama << endl;
    cout << "jenis role hero ";
    cout << "tipe hero = " << arhero.tipe << endl;
    
}

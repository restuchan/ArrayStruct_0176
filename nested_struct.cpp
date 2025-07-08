#include <iostream>
#include <string>
using namespace std;

struct skill{
    string skill1;
    string skill2;
    string skill3;
};

struct Hero
{
    string nama;
    string role;
    string tipe;
    skill skill;
};

int main()
{
    Hero arhero[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "hero ke- " << i + 1 << endl;
        cout << "masukkan nama hero = ";
        getline(cin , arhero[i].nama);
        cout << "masukkan jenis role = ";
        getline(cin , arhero[i].role);
        cout << "masukkan tipe hero = ";
        cin >> arhero[i].tipe;
        cout << endl;
        cin.ignore();
        cout << "masukkan skill 1 = ";
        getline(cin , arhero[i].skill.skill1);
        cout << "masukkan skill 2 = ";
        getline(cin , arhero[i].skill.skill2);
        cout << "masukkan skill 3 = ";
        getline(cin , arhero[i].skill.skill3);
    }

    cout << endl;
    cout << "tampilkan hero" << endl;
    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "hero ke- " << i + 1 << endl;
        cout << "nama hero = " << arhero[i].nama << endl;
        cout << "jenis role hero = " << arhero[i].role << endl;
        cout << "tipe hero = " << arhero[i].tipe << endl;

        cout << "skill 1 = " << arhero[i].skill.skill1 << endl;
        cout << "skill 2 = " << arhero[i].skill.skill2 << endl;
        cout << "skill 3 = " << arhero[i].skill.skill3 << endl;
    }
}

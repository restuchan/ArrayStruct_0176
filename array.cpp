#include <iostream>
using namespace std;

string matkul[] = {"Pemdas" , "Matematika"};

float nilaiAkhir[2] = {1 , 2.5};

char grade[5];

int main()
{
    cout << "nama matkul : " << matkul [0] << endl;
    matkul[0] = "logika teknik pemrograman";
    cout << "nama matkul : " << matkul [0] << endl;

    for(int i = 0; i < 2; i++)
    {
        cout << "nilai akhir ke- " << i+1 << " = " << nilaiAkhir[i] << endl;
    }

    cout << "input grade" << endl;
    for(int i = 0 ; i < 5; i++)
    {
        cout << "masukkan grade ";
        cin >> grade[i];
    }

    cout << endl;
    cout << "tampilkan grade" << endl;
    cout << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << "grade = " << grade[i] << endl;
    }
}

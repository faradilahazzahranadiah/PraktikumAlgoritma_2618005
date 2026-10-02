#include <iostream>
using namespace std;

int main()
{
    string nama;
    string nim;
    string kelas;
    int semester;
    int ipk;

    cout << "PRAKTIKUM ALGORITMA 2025" << endl;
    cout << endl;

    cout << "Masukan Nama : ";
    getline(cin, nama);

    cout << "Masukan NIM : ";
    cin >> nim;

    cout << "Masukan Kelas : ";
    cin >> kelas;

    cout << "Masukan Semester : ";
    cin >> semester;

    cout << "Masukan IPK : ";
    cin >> ipk;

    cout << endl;
    cout << "BIODATA MAHASISWA" << endl;
    cout << "========================================" << endl;
    cout << endl;

    cout << "Nama : " << nama << endl;
    cout << "NIM : " << nim << endl;
    cout << "Kelas : " << kelas << endl;
    cout << "Semester : " << semester << endl;
    cout << "IPK : " << ipk << endl;

    return 0;
}

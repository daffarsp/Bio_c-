#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama, kelas;
    int npm;

    // Input data
    cout << "Masukkan Nama: ";
    getline(cin, nama);
    cout << "Masukkan Kelas: ";
    cin >> kelas;
    cout << "Masukkan NPM: ";
    cin >> npm;

    // Output data
    cout << "\nBIODATA SAYA" << endl;
    cout << "Nama    : " << nama << endl;
    cout << "Kelas   : " << kelas << endl;
    cout << "NPM     : " << npm << endl;
    cout << "-------------------------" << endl;
    cout << "Nama Saya " << nama << " dengan NPM " << npm << " di Kelas " << kelas << endl;

    return 0;
}

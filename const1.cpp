#include <iostream>
using namespace std;

class Mahasiswa{
    public:
        string nama, npm;

        Mahasiswa(string nama, string b){
            this->nama = nama;
            npm = b;
        }
};

int main(){
    Mahasiswa Mhs("Bintang", "2357051023");

    cout << "Nama : " << Mhs.nama << endl;
    cout << "NPM  : " << Mhs.npm << endl;
}

//private
#include <iostream>
using namespace std;

class Mahasiswa{
    public:
        string nama;
    private:
        string npm;
};

int main(){
    Mahasiswa Mhs;

    cin >> Mhs.nama;
    cin >> Mhs.npm; //akan error karena private
    cout << Mhs.nama << " " << Mhs.npm;

    return 0;
}

#include <iostream>
using namespace std;

class Dosen{
    public:
    string nama;
    void tampilNama(){
        cout << "namanya adalah " << nama << endl;
    }
};
class Staf{
    public:
    int nidn;
};
int main (){
Dosen ds;
ds.nama = "Giga";
ds.tampilNama();

Dosen &dsref = ds;
dsref.nama = "joko";
cout << "alamat memori = " << &dsref << endl;
dsref.tampilNama();

Dosen *pds = &ds;
pds->nama = "reza";
cout << "alamat memori = " << pds << endl;
pds->tampilNama();

int a = 5;
int b = 3;
int *c = &a;
*c = 9;
cout << endl;
cout << a << endl;

cout << " alamat memori a = " << &a << endl;
cout << "alamat memori c = " << c << endl;
cout << "cetak c = " << *c << endl;
c = &b;
cout << "alamat memori c = " << c << endl;
cout << "cetak c = " << *c << endl;
}
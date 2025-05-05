#include <iostream>
using namespace std;

class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout<<"no induk = "<<nim<<endl;
    }
};

int main (){

    mahasiswa mhs; //pbjek mhs
    mhs.nim = 5;
    mhs.showNim(); //member acces operator

    mahasiswa &refmhs = mhs; //pointer reference refmhs
    refmhs.nim = 2; //member acces operator
    mhs.showNim();

    mahasiswa *pmhs = &mhs; //pointer dereference pmhs
    pmhs->nim = 3; //arror operator
    pmhs->showNim();
    return 0;
}
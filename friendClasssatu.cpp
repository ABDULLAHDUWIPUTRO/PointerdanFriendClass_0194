#include <iostream>
#include <string>
using namespace std;

class siswa;
class orang
{
    private:
    string nama;

    public:
      void setNama(string pNama);
      friend class siswa;
};

class siswa 
{
    private:
     int id;

     public:
       void setId(int pld);
       void displayAII(orang &a);
};
void orang::setNama(string pNama)
{
    nama = pNama;
}
void siswa::setId(int pld)
{
     id = pld;
}
void siswa::displayAII(orang &a)
{
   cout << id << endl << a.nama;
}
int main()
{
    orang joko;
    joko.setNama("joko susilo");
    siswa joko_siswa;
    joko_siswa.setId(1);
    joko_siswa.displayAII(joko);
    return 0;
}

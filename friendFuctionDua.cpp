#include <iostream>
using namespace std;

class pelajar;
class manusia
{
    public: 
    void showNilaipelajar(pelajar &x);
    void showNilaipelajarDua(pelajar &y);
};

class pelajar
{
    private:
      int nilai;

    public:
    pelajar() { nilai = 100; }
    friend void manusia::showNilaipelajar(pelajar &x);
};

void manusia::showNilaipelajar(pelajar &x)
{
    cout << x.nilai;
}
//void manusia::showNilaipelajarDua(pelajar &y)
//{
// cout << y.nilai;
//}

int main()
{
    manusia budi;
    pelajar pbudi;
    budi.showNilaipelajar(pbudi);
    return 0;
}
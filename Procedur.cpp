#include <iostream>
using namespace std;

class hewan{
    private:
    string jeniskelamin;
    public:
    string tipe;
    string umur;

    void inputdata(){
        cout << "Masukkan jenis kelamin = " << endl;
        cin >> jeniskelamin;
        cout << "Masukkan tipe = " << endl;
        cin >> tipe;
        cout << "Masukkan umur = " << endl;
        cin >> umur;
    }

    void tampilhewan(){
        cout << "jenis Kelaminnya adalah " << jeniskelamin << endl;
    }
};

int main(){
    hewan ghatan;
    ghatan.inputdata();
    cout << "Umurnya adalah " << ghatan.umur << endl;
    cout << "Tipenya adalah " << ghatan.tipe << endl;
    ghatan.tampilhewan();   
}
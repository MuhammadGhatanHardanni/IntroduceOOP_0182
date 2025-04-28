#include <iostream>
using namespace std;

class lingkaran{
    public:
    double jarijari;
    double luaslingkaran;


    void inputdata(){
        cout << "Masukkan jarijari = " << endl;
        cin >> jarijari;
    }
    double hitungluas(){
        return 3.14 * jarijari * jarijari;
    }
};
int main(){
    lingkaran hitung;
    hitung.inputdata();
    cout << "luasnya adalah " << hitung.hitungluas() << endl;

}
#include <iostream>
using namespace std;

class Segitiga{
    public  :
        int alas;
        int tinggi;

        void inputData(){
            cout << "Masukkan alas : ";
            cin >> alas;
            cout << "Masukkan tinggi : ";
            cin >> tinggi;
        }
    private :
        float luas (int a, int t){
            return 0.5 * a * t;
        }
    public  :
        void outputData(){
            if (alas % 2 == 1){ // cek bilangan bulat ganjil
                cout << "Luas yang dimasukkan adalah bilangan ganjil, luas tidak dapat dihitung" << endl;
            }
            else {
                cout << "Luasnya adalah : " << luas(alas,tinggi) << endl; // hitung jika bilangan selain bilangan bulat ganjil
            }
        }
};

int main(){
    Segitiga sg;
    sg.inputData();
    sg.outputData();
    
    return 0;
}
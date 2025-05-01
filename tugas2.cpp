#include <iostream>
using namespace std;

class Segitiga{
    public  :
        int alas;
        int tinggi;
        bool hitung;

        void inputData(){
            cout << "Masukkan alas : ";
            cin >> alas;
            cout << "Masukkan tinggi : ";
            cin >> tinggi;

            if (alas % 2 == 1){ // validasi bilangan bulat ganjil
                hitung = false; // alas dengan bilangan ganjil tidak dihitung
            }
            else {
                hitung = true;  // alas dengan bilangan genap akan dihitung
            }
        }
    private :
        float luas (int a, int t){
            return 0.5 * a * t;
        }
    public  :
        void outputData(){
            if (hitung){
                cout << "Luasnya adalah : " << luas(alas,tinggi) << endl;   // kondisi hitung adalah true
            }
            else {
                cout << "Luas yang dimasukkan adalah bilangan ganjil, luas tidak dapat dihitung" << endl;   // kondisi hitung adalah false
            }
        }
};

int main(){
}
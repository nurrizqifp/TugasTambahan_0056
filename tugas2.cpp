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
    public  :
};

int main(){
}
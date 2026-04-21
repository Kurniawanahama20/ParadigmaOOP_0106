#include <iostream>
using namespace std;

class barang{
    public :
        string nama;
        int jumlah;
        string kategori;
        string tanggalProduksi;
    void tampilspek(){
        cout << "nama barang : " << nama << endl;
        cout << "jumlah barang : " << jumlah << endl;
        cout << "kategori barang : " << kategori << endl;
        cout << "tanggal produksi : " << tanggalProduksi << endl;
    }
};

int main(){
    barang elektronik;
    barang nonElektronik;

    elektronik.nama = "Laptop";
    elektronik.jumlah = 1;
    elektronik.kategori = "elektronik";
    elektronik.tanggalProduksi = "1945-08-17";
    elektronik.tampilspek();

    cout << endl;

    nonElektronik.nama = "supersemas";
    nonElektronik.jumlah = 1;
    nonElektronik.kategori = "non elektronik";
    nonElektronik.tanggalProduksi = "1970-03-11";
    nonElektronik.tampilspek();

}
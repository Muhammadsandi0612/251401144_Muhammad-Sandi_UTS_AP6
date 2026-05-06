#include <iostream>
using  namespace std;
using namespace std;

int main() {
  
    int angka, balik = 0;
     cout << "Masukkan angka: ";
     cin >> angka;

while (angka != 0) //akan loop jika belum habis
 { int digit = angka % 10; //mengambil digit terakhir
    balik = balik * 10 + digit; //menggeser nilai balik lalu di kali 10 dan ditambahkan digit
    angka = angka / 10; } //membuang  digit terakhir

cout << "hasil dibalik: " << balik; //menampilkan hasil balik
}
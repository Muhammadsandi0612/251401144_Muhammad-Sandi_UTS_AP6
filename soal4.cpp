#include <iostream>
using  namespace std;
using namespace std;

int main() // 
{ 
    int n , original , digit , count = 0,sum = 0; // deklarasi variabel
     cout<<"masukkan bilangan : ";
     cin>>n;
      original = n; // simpan nilai awal

    int temp = n; // variabel sementara
while (temp != 0) // hitung jumlah digit
{
    temp /= 10; // buang 1 digit
    count++; // menambah hitungan 
}
     temp = n; // mereset temp

cout<<"hasil : ";
while (temp != 0) // memproses tiap digit
{
    digit = temp% 10; // ambil digit terakhir
    cout<<digit; 

for (int i = 1 ; i<count; i++) // buat tampilan perkalian
{
    cout<<"*"<<digit; // misal 3*3*3
}

int hasil = 1; // buat nampung hasil pangkat
for(int i=0;i<count;i++){ // ulang sebanyak jumlah digit
  hasil*=digit; // kalikan terus
}

sum += hasil; // jumlahkan ke total
temp/= 10; // buang digit terakhir

if (temp != 0) // kalau masih ada digit
{
    cout<<" + "; // tampilkan +
}
}

cout<<" = "<<sum<<endl; // tampilkan total

if (sum == original) // cek armstrong
{
    cout<<"YES "<<original<< " is an Armstrong number."<<endl; // jika sama
}
else
{
    cout<<"NO "<<original<< " is not an Armstrong number."<<endl; // jika tidak
}
}
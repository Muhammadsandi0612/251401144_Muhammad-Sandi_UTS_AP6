#include <iostream>
using  namespace std;
using namespace std;

int main(){ 

int n,i; // n = indeks fibonacci, i = perulangan
int a=0,b=1,c; // a dan b adalah 2 angka awal fibonacci, c untuk hasil sementara

cout<<"input: "; 
cin>>n; // ambil nilai n 

if(n==0) cout<<0; // jika n=0, hasil 0
 else if(n==1) cout<<1; // jika n=1, hasil 1
  else{ // jika n lebih dari 1
   for(i=2;i<=n;i++){ // loop dari 2 sampai n
   c=a+b; // jumlahkan dua angka sebelumnya
   a=b; // geser nilai a ke b
   b=c; // simpan hasil ke b
}
cout<<"output: "<<b; // tampilkan hasil fibonacci ke-n
}
}
#include <iostream>
using  namespace std;
using namespace std;

int main(){ 
int a,b,i,fpb=1; // a,b = input angka, i = perulangan, fpb = hasil awal

cout<<"input 2 angka: "; 
cin>>a>>b; 

for(i=1;i<=a && i<=b;i++){ // loop dari 1 sampai nilai terkecil antara a dan b
  if(a%i==0 && b%i==0){ // cek i membagi a dan b
   fpb=i; // simpan i sebagai fpb terbaru
}
}
  cout<<"output: "<<fpb; // tampilkan hasil fpb
}
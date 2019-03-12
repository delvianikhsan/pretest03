/*
nama program  : sorting struct
nama : delvian ikhsan maulana
npm : 140810180065
tanggal buat : 19 september 2018
deskripsi : sorting struct berdasarkan npm
*/

#include <iostream>
#include <string.h>

using namespace std;

struct r_mhs {
 char npm [14];
 char nama [40];
 float ipk ;
};

typedef r_mhs larikMhs [30];

void banyakData (int& n){
 cout<<"Input jumlah data : "; cin>>n;
}

void inputMhs (larikMhs& mhs, int n){
 for (int i = 0; i<n; i++){
  cout<<"NPM : "; cin>>mhs[i].npm;
  cout<<"Nama : "; cin.ignore(); cin>>mhs[i].nama;
  cout<<"IPK : "; cin>>mhs[i].ipk;
 }
}
